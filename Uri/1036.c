/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1036   ***/

#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, d, R1, R2;
  scanf("%lf%lf%lf", &a, &b, &c);
  d = sqrt((b * b) - 4 * a * c);
  if (a == 0 || ((b * b) - 4 * a * c) < 0)
  {
    printf("Impossivel calcular\n");
  }
  else
  {
    R1 = (-b + d) / (2 * a);
    R2 = (-b - d) / (2 * a);
    printf("R1 = %.5f\n", R1);
    printf("R2 = %.5f\n", R2);
  }

  return 0;
}