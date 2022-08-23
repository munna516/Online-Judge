#include<iostream>
using namespace std;
int main()
{
  int t;
  std::cin>>t;
  while(t--)
    {
      int x;
      std::cin>>x;
      if(x>=1 && x<=4)
        std::cout<<"YES"<<std::endl;
      else
        std::cout<<"NO"<<std::endl;  
    }
    
 return 0; 
}