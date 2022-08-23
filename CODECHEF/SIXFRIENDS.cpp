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
    if(3*a==2*b)
      std::cout<<3*a<<std::endl;
    else if(3*a>2*b)
      std::cout<<2*b<<std::endl;  
    else
      std::cout<<3*a<<std::endl;  
   }

 return 0; 
}
