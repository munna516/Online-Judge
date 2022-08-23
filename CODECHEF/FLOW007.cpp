#include<iostream>
using namespace std;
int main()
{
 int test;
 cin>>test;
 while(test--)
   {
    long long int a,sum=0,r;
    cin>>a;
    while(a!=0)
      {
        r=a%10;
        sum=sum*10 +r;
        a=a/10;
      }
    cout<<sum<<endl;  
   }

 return 0; 
}
