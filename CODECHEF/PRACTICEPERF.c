#include <stdio.h>
int main()
{
  int a[100], i, count = 0;
  scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
  for (i = 0; i < 4; i++)
  {
    if (a[i] >= 10)
      count++;
  }
  printf("%d", count);
  return 0;
}