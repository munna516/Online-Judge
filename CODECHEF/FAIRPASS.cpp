#include<iostream>
using namespace std;
int main()
{
  int t,n,k;
  std::cin>>t;
  while(t--)
    {
      std::cin>>n>>k;
      if(k>n)
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
