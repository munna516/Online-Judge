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
      if(10-x>=3)
        std::cout<<"YES"<<std::endl;
      else
        std::cout<<"NO"<<std::endl;  
    }

 return 0;  
}