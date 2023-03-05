#include<iostream>
using namespace std;
int main()
{
  long long n;
  std::cin>>n;
  if (n%2==0) 
        {
           std:: cout << n / 2 <<std::endl;
        }
        else 
        {
           std::cout << -1 * (n / 2 + 1)<<std::endl;
        }
 return 0;  
}