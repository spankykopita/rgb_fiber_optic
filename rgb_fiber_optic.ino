#include <Arduino.h>
#include <FastLED.h>
#include <bluefairy.h>
#include "palettes.h"
#include "utils.h"
#include "audio.h"
#include "visualizations.h"

#define MAX_BRIGHTNESS 255

// Digital
#define LED_PIN 1

bluefairy::Scheduler scheduler;

void setup() {
  random16_add_entropy(analogRead(MICROPHONE_PIN));
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(MAX_BRIGHTNESS);

  Serial.begin(9600);

  scheduler.every(1000 / DISPLAY_HERTZ, [](){
    recordAmplitude();
    if (isStartOfPeak) {
      if (isSuperPeak) {
        // Change colors on "super peak"
        currentPalette = getRandomPalette();

        visualization = spinny;
      } else {
        visualization = singleLED;
      }
    }
  
    if (lengthOfPeakMillis > 150) {
      visualization = strobe;
    }

    runVisualization();

    rotateColors();

    FastLED.show();
  });

  scheduler.every(3000, [](){
    nextPalette = getRandomPalette();
  });
  scheduler.every(10, [](){
    nblendPaletteTowardPalette(currentPalette, nextPalette, 80);
  });
  scheduler.every(20, [](){
    if (visualization == strobe) {
      selectedLED = (selectedLED + 1) % NUM_LEDS;
    }
  });
}

void loop() {
  scheduler.loop();
  random16_add_entropy(smoothedAmplitude + millis());
}
