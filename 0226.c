// A: s < t
// B: u
// C:
int strlonger(char *s, char *t) {
  // return (long)strlen(s) - (long)strlen(t) > 0;
  return strlen(s) > strlen(t);
}