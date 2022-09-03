/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2759   ***/

#include <stdio.h>
int main()
{
  char a;
  char b;
  char c;

  scanf("%c %c %c", &a,&b,&c);

  
  printf("A = %c, B = %c, C = %c\n", a,b,c);
  printf("A = %c, B = %c, C = %c\n", b,c,a);
  printf("A = %c, B = %c, C = %c\n", c,a,b);

  return 0;
}