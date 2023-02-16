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
    if(a==b)
      std::cout<<"ANY"<<std::endl;
    else if(a>b)
      std::cout<<"SECOND"<<std::endl;
    else
      std::cout<<"FIRST"<<std::endl; 
         
   }

 return 0; 
}
