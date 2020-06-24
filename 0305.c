// xp: %rdi
// yp: %rsi
// zp: %rdx

void decode1(long *xp, long *yp, long *zp) {
  long xx = *xp;
  long yy = *yp;
  long zz = *zp;
  *xp = zz;
  *yp = xx;
  *zp = yy;
}
