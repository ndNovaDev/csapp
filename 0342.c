struct ele {
  long v;
  struct ele *p;
};

long fun(struct ele *ptr) {
  long result = 0;
  while (ptr)
  {
    result += ptr->v;
    ptr = ptr->p;
  }
  return result;
}


