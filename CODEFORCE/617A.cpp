#include<iostream>
using namespace std;
int main()
{
 long long int a;
 int count=0;
 std::cin>>a;
 while(a>0)
   {
    a-=5;
    count++;
   }
 std::cout<<count<<std::endl;
 return 0; 
}