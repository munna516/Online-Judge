/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1044   ***/

#include <stdio.h>
int main()
{
  int x, y;
  scanf("%d%d", &x, &y);
  if (y % x == 0 || x % y == 0)
    printf("Sao Multiplos\n");
  else
    printf("Nao sao Multiplos\n");

  return 0;
}