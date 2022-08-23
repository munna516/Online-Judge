#include<iostream>
using namespace std;
int main()
{
 int n,h,count=0,max=0;
 std::cin>>n>>h;
 for(int i=0;i<n;i++)
   {
    int ary[n];
    std::cin>>ary[i]; 
    if(ary[i]<=h)
      {
        count++;
      }
    else 
      {
        max=max+2;
      }  
   }
 int sum=count+max;
 std::cout<<sum<<endl;
   
 
 return 0;  
}