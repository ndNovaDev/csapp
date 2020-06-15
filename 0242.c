int div16(int x) {
  return (x + (1 << 4) - 1) >> 4;
}