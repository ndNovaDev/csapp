int bis(int x, int m);
int bic(int x, int m);

int bool_or(int x, int y) {
  int result = bis(x, y);
  return result;
}

int bool_xor(int x, int y) {
  int result = (bis((bic(bis(x, y), x)), (bic(bis(x, y), y))));
  return result;
}

// bis(bic(x, y), bic(y, x))