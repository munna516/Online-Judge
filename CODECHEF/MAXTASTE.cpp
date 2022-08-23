#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int test,A,B,C,D;
 std::cin>>test;
 while(test--)
   {
    std::cin>>A>>B>>C>>D;
    std::cout<<max(A,B)+max(C,D)<<std::endl;;      
   }

 return 0; 
}
