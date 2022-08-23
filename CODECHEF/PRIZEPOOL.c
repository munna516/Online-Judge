#include<stdio.h>
int main()
{
  int t,x,y,i,sum=0;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
     {
       scanf("%d %d",&x,&y);
       printf("%d\n",(10*x) + (90 * y));
       sum=0;
       printf("\n");
     }
 return 0;
}   
  