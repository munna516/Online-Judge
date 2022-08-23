#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 int a=0,max=0;
 while(test--)
   {
      int x,y;
      std::cin>>x>>y;
      a=a-x;
      a=a+y;
      if(a>max)
        {
          max=a;
        }
   }
 std::cout<<max<<std::endl;   

 return 0;  
}