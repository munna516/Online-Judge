#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
   {
    int n,x;
    cin>>n>>x;
    int buy=n-x;
    if(n<=x)
       {
        cout<<"0"<<endl;
       }
    else if(buy%4==0)
        {
          cout<<buy/4<<endl;
        }   
    else
       {
        cout<<(buy/4)+1<<endl;
       }    
   }

 return 0; 
}