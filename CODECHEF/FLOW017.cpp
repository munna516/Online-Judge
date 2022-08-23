#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    long long int a,b,c;
    std::cin>>a>>b>>c;
    if(a>b && a<c)
      cout<<a<<endl;
    else if(a>c && a<b)
      cout<<a<<endl;  
    else if(b>a && b<c)
      cout<<b<<endl;
    else if(b>c && b<a)
      cout<<b<<endl;  
    else 
      cout<<c<<endl;      
    
   }


 return 0; 
}
