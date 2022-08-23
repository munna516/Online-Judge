#include<iostream>
using namespace std;
int main()
{
 int t;
 std::cin>>t;
 while(t--)
  {
    int x,y;
    std::cin>>x>>y;
    if(x>y)
      std::cout<<"0"<<std::endl;
    else 
      std::cout<<y-x<<std::endl;   
  }

 return 0; 
}
