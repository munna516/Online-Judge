#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    if(c<b)
      cout<<"0"<<endl;
    else if(a*b>=c)
      cout<<c/b<<endl;
    else 
       cout<<a<<endl;

  }

 return 0; 
}
