/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1048   ***/

#include <stdio.h>
int main()
{
  double x, new_salary, add;
  int percent;
  scanf("%lf", &x);
  if (x >= 0 && x <= 400)
  {
    percent = 15;
    add = x * 0.15;
    new_salary = x + add;
  }
  else if (x > 400 && x <= 800)
  {
    percent = 12;
    add = x * 0.12;
    new_salary = x + add;
  }
  else if (x > 800 && x <= 1200)
  {
    percent = 10;
    add = x * 0.10;
    new_salary = x + add;
  }
  else if (x > 1200 && x <= 2000)
  {
    percent = 7;
    add = x * 0.07;
    new_salary = x + add;
  }
  else if (x > 2000)
  {
    percent = 4;
    add = x * 0.04;
    new_salary = x + add;
  }

  printf("Novo salario: %.2lf\n", new_salary);
  printf("Reajuste ganho: %.2lf\n", add);
  printf("Em percentual: %d %%\n", percent);
  return 0;
}