#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    int n,count=0;
    cin>>n;
    int ary[n];
    for(int i=0;i<n;i++)
      {
        cin>>ary[i];
        if(ary[i]>=10  && ary[i]<=60)
           count++;
      }
    std::cout<<count<<endl;  
   }

 return 0; 
}
