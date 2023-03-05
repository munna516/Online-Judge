#include<iostream>
using namespace std;
int main()
{
 int sum=0,n;
 cin>>n;
 int ary[n];
 for(int i=0;i<n;i++)
    {
      cin>>ary[i];
      sum+=ary[i];
    }
 if(sum%4==0)
   {
    cout<<sum/4<<endl;
   }
 else
   {
    cout<<(sum/4)+1<<endl;
   }
   
 return 0;  
}