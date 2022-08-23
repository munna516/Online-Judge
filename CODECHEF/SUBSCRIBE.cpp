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
    if(x<=30)
      std::cout<<"NO"<<std::endl;
    else
      std::cout<<"YES"<<std::endl;  
   }

 return 0; 
}
