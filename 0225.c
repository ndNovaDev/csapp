float sum_elements(float a[], unsigned length) {
  int i;
  float result = 0;

  for (i = 0; i <= length-1; i++) {
    result += a[i];
  }
  return result;
}

float sum_elements(float a[], int length) {
  int i;
  float result = 0;

  for (i = 0; i <= length-1; i++) {
    result += a[i];
  }
  return result;
}

// https://www.cnblogs.com/grooovvve/p/10323953.html
