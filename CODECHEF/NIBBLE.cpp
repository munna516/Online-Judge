#include<iostream>
using namespace std;
int main()
{
 int test;
 cin>>test;
 while(test--)
   {
    int a;
    cin>>a;
    if(a%4==0)
      cout<<"Good"<<endl;
    else
      cout<<"Not Good"<<endl;   
   }

 return 0; 
}
