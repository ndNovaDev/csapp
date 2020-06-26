long fact_for_gd_goto(long n) {
  long i = 2;
  long result = 1;
  if (i > n) {
    goto end;
  }
loop:
  result *= i;
  i++;
  if (i <= n) {
    goto loop;
  }
end:
  return result;
}