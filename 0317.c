long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y) {
  long result;
  if (x < y) {
    lt_cnt++;
    result = y - x;
  }
  else {
    ge_cnt++;
    result = x - y;
  }
  return result;
}

long absdiff_se_goto(long x, long y) {
  long result;
  if (x < y)
    goto t;
  ge_cnt++;
  result = x - y;
  goto d;
t:
  lt_cnt++;
  result = y - x;
d:
  return result;
}