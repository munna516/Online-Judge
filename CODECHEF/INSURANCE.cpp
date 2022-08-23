#include<iostream>
using namespace std;
int main()
{
 int test,x,y;
 std::cin>>test;
 while(test--)
   {
    std::cin>>x>>y;
    if(x>=y)
      {
        std::cout<<y<<std::endl;
      }
    else
      {
        std::cout<<x<<std::endl;
      }  
   }

 return 0; 
}
