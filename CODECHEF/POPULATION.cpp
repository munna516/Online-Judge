#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    int x,y,z;
    std::cin>>x>>y>>z;
    cout<<(x+z)-y<<endl;
   }

 return 0; 
}
