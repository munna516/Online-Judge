#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    int x,y;
    std::cin>>x>>y;
    if(x>=y)
      {
        std::cout<<"YES"<<std::endl;
      }
    else
      {
        std::cout<<"NO"<<std::endl;
      }  
   }

 return 0; 
}
