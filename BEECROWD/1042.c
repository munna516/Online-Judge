/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1042   ***/

#include <stdio.h>
int main()
{
  int a, b, c, first, mid, last;
  scanf("%d%d%d", &a, &b, &c);
  if (a <= b && a <= c)
  {
    first = a;
    if (b <= c)
    {
      mid = b;
      last = c;
    }
    else
    {
      mid = c;
      last = b;
    }
  }
  else if (b <= a && b <= c)
  {
    first = b;
    if (a <= c)
    {
      mid = a;
      last = c;
    }
    else
    {
      mid = c;
      last = a;
    }
  }

  else if (c <= a && c <= b)
  {
    first = c;
    if (b <= a)
    {
      mid = b;
      last = a;
    }
    else
    {
      mid = a;
      last = b;
    }
  }

  printf("%d\n%d\n%d\n",first,mid,last);
  printf("\n%d\n%d\n%d\n",a,b,c);

  return 0;
}