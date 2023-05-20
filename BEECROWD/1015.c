/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1015   ***/

#include <stdio.h>
#include <math.h>
int main()
{
  float x1, y1, x2, y2, a, b, distance;
  scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
  a = x2 - x1;
  b = y2 - y1;
  distance = sqrt((a * a) + (b * b));
  printf("%.4f\n", distance);

  return 0;
}