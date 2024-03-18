// Analog
#define MICROPHONE_PIN A1

#define SAMPLES_COUNT 600
#define SAMPLING_FREQUENCY 10000 //Hz, must be less than 10000 due to ADC
#define PEAK_THRESHOLD 0.8

// 10000 hertz of sampling is 100 microseconds per sample
// 600 samples at 100 microseconds apiece => sampling over 60 milliseconds
unsigned int samplingPeriodMicro = round(1000000*(1.0/SAMPLING_FREQUENCY));

unsigned int smoothedAmplitude = 100;
float minAmplitude = 1024;
float maxAmplitude = 0;
unsigned int lastPeaksAmplitude;
double amplitudeRatio = 0.0;
bool isPeak = false;
bool isSuperPeak = false;
bool isStartOfPeak = false;
unsigned long startOfPeakMillis;
unsigned int lengthOfPeakMillis;

void recordAmplitude() {
  // Correct
  // int micSample = analogRead(MICROPHONE_PIN); // Same as analogRead(2)
  // Serial.print("Sample1:");
  // Serial.println(micSample);

  // Flatline? This is almost definitely the LED A0 pin
  // int micSample2 = analogRead(0);
  // Serial.print("Sample2:");
  // Serial.println(micSample2);

  // Reacts to A1 touch
  // int micSample3 = analogRead(1);
  // Serial.print("Sample3:");
  // Serial.println(micSample3);

  unsigned int minSample = 1024;
  unsigned int maxSample = 0;
  for (int i = 0; i < SAMPLES_COUNT; i++) {
    unsigned long microseconds = micros();
    unsigned int sample = analogRead(MICROPHONE_PIN);
    maxSample = max(maxSample, sample);
    minSample = min(minSample, sample);
    while (micros() < (microseconds + samplingPeriodMicro)) { }
  }
  unsigned int amplitude = maxSample - minSample;
  Serial.print("Amplitude:");
  Serial.println(amplitude);

  smoothedAmplitude = smoothedAmplitude * 0.1 + amplitude * 0.9;
  Serial.print("SmoothedAmplitude:");
  Serial.println(smoothedAmplitude);

  float minDecay = 1.003;
  minAmplitude = min(minAmplitude * minDecay, smoothedAmplitude);
  float maxDecay = 0.98;
  maxAmplitude = max(maxAmplitude * maxDecay, smoothedAmplitude);
  Serial.print("MinAmplitude:");
  Serial.println(minAmplitude);
  Serial.print("MaxAmplitude:");
  Serial.println(maxAmplitude);

  amplitudeRatio = (smoothedAmplitude - minAmplitude) / (maxAmplitude - minAmplitude);
  bool newIsPeak = amplitudeRatio > PEAK_THRESHOLD;
  isStartOfPeak = !isPeak && newIsPeak;
  isPeak = newIsPeak;
  isSuperPeak = smoothedAmplitude > lastPeaksAmplitude * 1.1;
  Serial.print("IsPeak:");
  Serial.println(isPeak);
  Serial.print("IsSuperPeak:");
  Serial.println(isSuperPeak);

  Serial.print("IsStartOfPeak:");
  Serial.println(isStartOfPeak);

  if (isStartOfPeak) {
    startOfPeakMillis = millis();
    lengthOfPeakMillis = 0;
    lastPeaksAmplitude = smoothedAmplitude;
  } else if (isPeak) {
    lengthOfPeakMillis = millis() - startOfPeakMillis;
  } else {
    lengthOfPeakMillis = 0;
  }

  Serial.print("LengthOfPeak:");
  Serial.println(lengthOfPeakMillis);
}