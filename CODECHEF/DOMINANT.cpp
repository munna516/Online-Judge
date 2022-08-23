#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
  {
   int x,y,z;
   std::cin>>x>>y>>z;
   if(x>y+z)
     std::cout<<"YES"<<std::endl;
   else if(y>x+z)
     std::cout<<"YES"<<std::endl;  
   else if(z>x+y)
     std::cout<<"YES"<<std::endl;  
   else
    std::cout<<"NO"<<std::endl;    
   
  }
  
 return 0; 
}