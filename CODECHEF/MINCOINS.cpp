#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
     int x,count=0;
     cin>>x;
     if(x%10==0 || x%5==0)
      {
        while(x>0)
          {
            count++;
            x-=10;
          }
        cout<<count<<endl;
      }
      else
        cout<<"-1"<<endl; 
    }
 return 0;   
}