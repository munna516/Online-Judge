#include<stdio.h>
int main()
{
  int test,x,y;
  scanf("%d",&test);
  
  while(test--)
     {
       scanf("%d %d",&x,&y);
       if((y-x)%8>0)
          printf("%d\n",((y-x)/8)+1);
       else 
        printf("%d\n",((y-x)/8));    
     }   
 return 0;
}