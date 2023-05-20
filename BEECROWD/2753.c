/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2753   ***/

#include <stdio.h>
int main()
{
  int ary[26];
  ary[0] = 97;
  for (int i = 1; i < 26; i++)
  {
    ary[i] = 97 + i;
  }
  for (int i = 0; i < 26; i++)
  {
    printf("%d e %c\n", ary[i], ary[i]);
  }

  return 0;
}