#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int a,b,c;
 std::cin>>a>>b>>c;
 int num1=(a*b)+c;
 int num2=a*b*c;
 int num3=(a+b)*c;
 int num4=a+(b*c);
 int num5=a+b+c;
 int num6=a*(b+c);

 int p= max(num1,num2);
 int q= max(num3,num4);
 int r= max(num5,num6);
 
 if(p>q && p>r)
    std::cout<<p<<std::endl;
  else if(q>p && q>r)
    std::cout<<q<<std::endl;
  else
    std::cout<<r<<std::endl;    



  return 0;
}