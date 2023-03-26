#include <stdio.h>
int main()
{
  int N, A, B;
  scanf("%d %d %d", &N, &A, &B);
  int C = (N + B) - (A + B);
  int D = N - (A + B);
  printf("%d %d", C, D);
  return 0;
}