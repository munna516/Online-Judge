#include <stdio.h>
int main()
{
  int w, i;
  scanf("%d", &w);
  if (w % 2 == 1)
    printf("NO");
  else
  {
    if (w == 2)
      printf("NO");
    else
      printf("Yes");
  }

  return 0;
}
