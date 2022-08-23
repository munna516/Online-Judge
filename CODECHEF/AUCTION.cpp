#include<iostream>
using namespace std;
int main()
{
 int t;
 std::cin>>t;
 while(t--)
   {
    int a,b,c;
    std::cin>>a>>b>>c;
    if(a>b && a>c)
       {
        std::cout<<"Alice"<<std::endl;
       }
    else if(b>a && b>c)
       {
        std::cout<<"Bob"<<std::endl;
       } 
     else if(c>a && c>b)
       {
        std::cout<<"Charlie"<<std::endl;
       }       
   }

 return 0; 
}
