// Analog
#define MICROPHONE_PIN A1

#define SAMPLES_COUNT 200
#define SAMPLING_FREQUENCY 10000 //Hz, must be less than 10000 due to ADC
#define PEAK_THRESHOLD 0.85
#define SUPER_PEAK_THRESHOLD 0.95

// 10000 samples per second is 10 samples per millisecond or 100 microseconds per sample
// 600 samples at 100 microseconds apiece => sampling over 60 milliseconds
unsigned int samplingPeriodMicro = round(1000000*(1.0/SAMPLING_FREQUENCY));

float minAmplitude = 1024;
float maxAmplitude = 0;
double amplitudeRatio = 0.0;
bool isPeak = false;
bool isSuperPeak = false;
bool isStartOfPeak = false;
unsigned long startOfPeakMillis;
unsigned int lengthOfPeakMillis;

PeakDetection peakDetection;

void recordAmplitude() {

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
  peakDetection.add(amplitude);

  float minDecay = 1.003;
  minAmplitude = min(minAmplitude * minDecay, amplitude);
  float maxDecay = 0.995;
  maxAmplitude = max(maxAmplitude * maxDecay, amplitude);
  Serial.print("MinAmplitude:");
  Serial.println(minAmplitude);
  Serial.print("MaxAmplitude:");
  Serial.println(maxAmplitude);

  amplitudeRatio = (amplitude - minAmplitude) / (maxAmplitude - minAmplitude);
  Serial.print("AmplitudeRatio:");
  Serial.println(amplitudeRatio);

  bool newIsPeak = peakDetection.getPeak() == 1;
  isStartOfPeak = !isPeak && newIsPeak;
  isPeak = newIsPeak;
  isSuperPeak = amplitudeRatio > SUPER_PEAK_THRESHOLD;
  Serial.print("IsSuperPeak:");
  Serial.println(isSuperPeak);
  Serial.print("IsPeak:");
  Serial.println(isPeak);

  Serial.print("IsStartOfPeak:");
  Serial.println(isStartOfPeak);

  Serial.print("PeakLibraryValue:");
  Serial.println(peakDetection.getFilt());

  if (isStartOfPeak) {
    startOfPeakMillis = millis();
    lengthOfPeakMillis = 0;
  } else if (isPeak) {
    lengthOfPeakMillis = millis() - startOfPeakMillis;
  } else {
    lengthOfPeakMillis = 0;
  }

  Serial.print("LengthOfPeak:");
  Serial.println(lengthOfPeakMillis);
}