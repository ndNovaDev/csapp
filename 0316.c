void cond_goto(long a, long *p) {
  if (p == 0)
    goto done;

  if (a <= *p)
    goto done;

  *p = a;

done:
  return;
}

// B: 组合条件