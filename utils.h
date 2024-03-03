enum TargetDevice {
  hangingLamp,
  waterBottle,
};

#define TARGET_DEVICE waterBottle

long mapToByteRange(long value, long fromLow, long fromHigh) {
  return map(value, fromLow, fromHigh, 0, 255);
}

long mapFromByteRange(long value, long toLow, long toHigh) {
  return map(value, 0, 255, toLow, toHigh);
}
