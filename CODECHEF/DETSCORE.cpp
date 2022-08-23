#include<iostream>
using namespace std;
int main()
{
 int t;
 std::cin>>t;
 while(t--)
   {
    int x,n;
    std::cin>>x>>n;
    int test=(x/10)*n;
    std::cout<<test<<std::endl;
   }

 return 0; 
}
