#include<iostream>
using namespace std;
int main()
{
 int t;
 std::cin>>t;
 while(t--)
   {
    int n,x,y;
    std::cin>>n>>x>>y;
    if(n>= x+(2*y))
      std::cout<<"YES"<<std::endl;
    else
      std::cout<<"NO"<<std::endl;  
   }

 return 0; 
}
