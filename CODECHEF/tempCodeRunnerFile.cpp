#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    long long int x,count=0;
    cin>>x;
    for(int i=1;i<=x;i++)
      {
        if(i%5==0)
          count++;
      }
    cout<<x-count<<endl;  
   }

 return 0; 
}
