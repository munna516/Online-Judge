/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1020   ***/

#include <stdio.h>
int main()
{
  int days, month, year;
  scanf("%d", &days);
  year = days / 365;
  days = days % 365;
  month = days / 30;
  days = days % 30;
  printf("%d ano(s)\n", year);
  printf("%d mes(es)\n", month);
  printf("%d dia(s)\n", days);

  return 0;
}