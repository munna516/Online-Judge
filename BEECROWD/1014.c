/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1014   ***/

#include <stdio.h>
int main()
{
  int distance;
  float fuel, average;
  scanf("%d%f", &distance, &fuel);
  printf("%.3f km/l\n", (distance / fuel));

  return 0;
}