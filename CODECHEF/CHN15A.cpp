#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
   {
    int n,k,x,count=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
      {
        cin>>x;
        if((x+k)%7==0)
          count++;
      }
     cout<<count<<endl; 
   }

 return 0; 
}