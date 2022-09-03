/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1005   ***/

#include <stdio.h>
int main()
{
  float x, y, average;
  scanf("%f%f", &x, &y);
  average = ((x * 3.5) + (y * 7.5)) / (3.5 + 7.5);
  printf("MEDIA = %.5f\n", average);

  return 0;
}