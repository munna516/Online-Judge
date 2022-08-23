#include<iostream>
using namespace std;
int main()
{
  int test,x,y;
  std::cin>>test;
  while(test--)
    {
      std::cin>>x>>y;
      if(x==y || x>y)
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