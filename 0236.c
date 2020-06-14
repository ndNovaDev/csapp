#include<stdint.h>

int tmult_ok(int x, int y) {
  int p = x * y;
  int64_t p64 = (int64_t)x * (int64_t)y;
  return (int64_t)p == p64;
}
