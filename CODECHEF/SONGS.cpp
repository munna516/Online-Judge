#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
  {
   int n,x;
   std::cin>>n>>x;
   std::cout<<n/(3*x)<<std::endl;
  }
  
 return 0; 
}