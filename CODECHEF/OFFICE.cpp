#include<iostream>
using namespace std;
int main()
{
 int test,x,y;
 std::cin>>test;
 while(test--)
   {
    std::cin>>x>>y;
    int total=(x*4)+y;
    std::cout<<total<<std::endl;
   }

 return 0; 
}
