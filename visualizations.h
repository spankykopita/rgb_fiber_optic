#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS   3
#define DISPLAY_HERTZ 60
#define MAX_ROTATION_HERTZ 5.0

typedef enum {
  spinny,
  sparkle,
} viz;

CRGBPalette16 currentPalette = getRandomPalette();
CRGBPalette16 nextPalette = getRandomPalette();

// 256 fastLED index units per rotation * x rotations per second / y display refreshes per second
// = fastLED index units per display refresh
int rotationIncrement = 256 * MAX_ROTATION_HERTZ / DISPLAY_HERTZ;
uint8_t rotationOffset = 0;

uint8_t brightness = 0;

CRGB leds[NUM_LEDS];

viz lastViz = spinny;

void blackOut() {
  for (byte i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Black;
  }
}

// Fade every LED in the array by a specified amount
void fadeAll(byte fadeIncr) {
  for (byte i = 0; i < NUM_LEDS; i++) {
    leds[i] = leds[i].fadeToBlackBy(fadeIncr);
  }
}

void rotateColors() {
  // rotationIncrement is the max speed per display refresh, but we "slow it down" based on the intensity of the music
  rotationOffset += rotationIncrement * (amplitudeRatio - 0.5) / 0.5;
}

void setBrightnessByPeak() {
  // brightness = 255;
  // brightness = mapToByteRange(smoothedAmplitude, minAmplitude, maxAmplitude);
  // brightness = map(smoothedAmplitude, minAmplitude, maxAmplitude, 20, 255);
  uint8_t brightnessDecay = 3;
  int nextBrightness = isPeak ? 255 : brightness - brightnessDecay;
  // Brightness never fully turns off
  brightness = max(nextBrightness, 50);
}

void setColorToPixel(int ringIndex) {
  uint8_t colorIndex = mapToByteRange(ringIndex, 0, NUM_LEDS);
  leds[ringIndex] = ColorFromPalette(currentPalette, colorIndex + rotationOffset, brightness, LINEARBLEND);
}

void showSpinnyRing() {
  if (lastViz != spinny) {
    lastViz = sparkle;
  }

  setBrightnessByPeak();

  for (int i = 0; i < NUM_LEDS; i++) {
    setColorToPixel(i);
  }
}

void showSparkles() {
  if (lastViz != sparkle) {
    blackOut();
    lastViz = sparkle;
  }

  setBrightnessByPeak();

  uint8_t ledToSparkle = random8(NUM_LEDS);
  setColorToPixel(ledToSparkle);
  fadeAll(60);
}
