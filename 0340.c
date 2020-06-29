#define N 16
typedef int fix_matrix[N][N];

void fix_set_disg_opt(fix_matrix A, int val) {
  long offset = 0;
  long *a = A;
  long end = 4 * (17 * N);

  do
  {
    *(a + offset) = val;
    offset += N * 17;
  } while (offset < end);
  
}


void answer(fix_matrix A, int val) {
  int *Abase = &A[0][0];
  long i = 0;
  long iend = N * (N + 1);
  do {
    Abase[i] = val;
    i += (N + 1);
  } while (i != iend);
}