#include<stdio.h>
int main()
{
  int test,i;
  scanf("%d",&test);
  for(i=0;i<test;i++)
      {
        int a[4],n;
        scanf("%d",&n);
        scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
        int max=a[0];
        for(int j=1;j<4;j++)
             {
                if(max<a[j])
                max=a[j];
             }
        printf("%d\n",max);
      }
  return 0;   
}