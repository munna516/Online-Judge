#include<iostream>
using namespace std;
int main()
{
  int t;
  std::cin>>t;
  while(t--)
    {
      int i,x,y,z,count=0;
      std::cin>>x>>y>>z;
      std::cout<<(z-y)/x<<std::endl; 
    }
  return 0;  
}