#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    int a,b;
    std::cin>>a>>b;
    if(a*100>=b*10)
      std::cout<<"Cloth"<<std::endl;
    else  
       std::cout<<"Disposable"<<std::endl;    
   }

 return 0; 
}
