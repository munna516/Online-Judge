/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1019   ***/

#include<stdio.h>
int main()
{
  int x,h,m;
  scanf("%d",&x);
  h=x/3600;
  x=x%3600;
  m=x/60;
  x=x%60;
  printf("%d:%d:%d\n",h,m,x);

  return 0;
}