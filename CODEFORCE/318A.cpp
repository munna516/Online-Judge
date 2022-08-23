#include<iostream>
using namespace std;
int main()
{
 long long int n,k;
 std::cin>>n>>k;

  n=(n+1)/2;
  if(k>n)
    std::cout<<2 * (k-n)<<std::endl;
  else
    std::cout<< (2*k)-1<<std::endl;
 
 return 0;  
}
