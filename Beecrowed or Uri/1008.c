/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1008   ***/

#include <stdio.h>
int main()
{
  int number, work_hour;
  float salary_per_hour;
  scanf("%d%d%f", &number, &work_hour, &salary_per_hour);
  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2f\n", (work_hour * salary_per_hour));

  return 0;
}