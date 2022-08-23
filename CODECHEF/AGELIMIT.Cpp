#include<iostream>
using namespace std;
int main()
{
  int t;
  std::cin>>t;
  while(t--)
    {
      int x,y,a;
      std::cin>>x>>y>>a;
      if(a>=x && a<y)
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