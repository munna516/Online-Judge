#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  
 int test;
 std::cin>>test;
 while(test--)
   {
    int a,b;
    std::cin>>a>>b;
    if(a>=b)
      std::cout<<7-a<<std::endl;
    else
      std::cout<<7-b<<std::endl;  
   }

 return 0; 
}
