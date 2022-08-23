#include<iostream>
using namespace std;
int main()
{
 int t;
 std::cin>>t;
 while(t--)
  {
    int m,n;
    std::cin>>m>>n;
    if(m>=n*30)
      std::cout<<"YES"<<std::endl;
    else
      std::cout<<"NO"<<std::endl;   
  }

 return 0; 
}