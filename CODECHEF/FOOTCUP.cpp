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
    if(a>0 && b>0 && a==b)
      std::cout<<"YES"<<std::endl;
    else 
      std::cout<<"NO"<<std::endl;  
   }

 return 0; 
}
