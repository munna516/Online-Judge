#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    int x,y,z;
    std::cin>>x>>y>>z;
    int total=(x*5)+(y*10);
    std::cout<<total/z<<std::endl;
   }

 return 0; 
}
