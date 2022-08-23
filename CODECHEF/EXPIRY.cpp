#include<iostream>
using namespace std;
int main()
{
 int t;
 std::cin>>t;
 while(t--)
  {
    int n,m,k;
    std::cin>>n>>m>>k;
    if(m*k>=n)
      std::cout<<"YES"<<std::endl;
    else
      std::cout<<"NO"<<std::endl;  
  }

 return 0; 
}