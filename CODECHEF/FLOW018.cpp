#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    int num,fact=1;
    cin>>num;
    for(int i=1;i<=num;i++)
      {
        fact=fact*i;
      }
    cout<<fact<<endl;  
   }

 return 0; 
}
