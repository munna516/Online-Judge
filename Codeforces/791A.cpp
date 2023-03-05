#include<iostream>
using namespace std;
int main()
{
  int a,b,i=0;
  std::cin>>a>>b; 
  while(!(a>b))     // b >= a
     {
       a=a*3;
       b=b*2;
       i++;
     }

 std::cout<<i<<std::endl;

 return 0; 
}