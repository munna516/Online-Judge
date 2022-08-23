#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    int a;
    cin>>a;
    if(a%10==0)
      cout<<a/10<<endl;
    else
       cout<<(a/10)+1<<endl;  
   }

 return 0; 
}
