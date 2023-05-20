/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1043   ***/

#include <stdio.h>
int main()
{
  float x, y, z;
  scanf("%f%f%f", &x, &y, &z);
  if (x + y > z && y + z > x && z + x > y)
    printf("Perimetro = %.1f\n", (x + y + z));
  else
    printf("Area = %.1f\n", ((x + y) / 2) * z);

  return 0;
}