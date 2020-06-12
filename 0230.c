int tadd_ok(int x, int y) {
  int s = x + y;
  bool ot = (x > 0 && y > 0 && s <= 0);
  bool ob = (x < 0 && y < 0 && s >= 0);
  return !(ot || ob)
}