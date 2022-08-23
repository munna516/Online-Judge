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
    if(b<a)
      std::cout<<"NO"<<std::endl;
    else if(b>=a && b<=a+200)
      std::cout<<"YES"<<std::endl;
    else 
      std::cout<<"NO"<<std::endl;  
   }

 return 0; 
}
