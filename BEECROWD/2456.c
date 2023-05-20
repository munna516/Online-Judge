/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2456   ***/

#include <stdio.h>
int main()
{
  int a[5], cnt_1 = 1, cnt_2 = 1;

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i = 1; i < 5; i++)
  {
    if (a[i] > a[i - 1])
      cnt_1++;
    else if (a[i] < a[i - 1])
      cnt_2++;
  }
  if (cnt_1 == 5)
    printf("C\n");
  else if (cnt_2 == 5)
    printf("D\n");
  else
    printf("N\n");
  return 0;
}