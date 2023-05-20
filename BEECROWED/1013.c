/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1013   ***/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a, b, c, d, e, f;
  scanf("%d%d%d", &a, &b, &c);
  d = (a + b + abs(a - b)) / 2;
  e = (a + c + abs(a - c)) / 2;
  f = (b + c + abs(b - c)) / 2;
  if (d >= e && d >= f)
    printf("%d eh o maior\n", d);
  else if (f >= d && f >= e)
    printf("%d eh o maior\n", f);
  else if (e >= d && f >= f)
    printf("%d eh o maior\n", e);
  return 0;
}