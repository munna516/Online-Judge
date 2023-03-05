#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
  int test;
  long double sum=0;
  std::cin>>test;
  long double ary[test];
  for(int i=0;i<test;i++)
    {
      std::cin>>ary[i];
      sum=sum+ary[i];
    }
 std::cout << std::setprecision(14);   
 std::cout<<showpoint<<sum/test<<std::endl; 

 return 0;  
}
