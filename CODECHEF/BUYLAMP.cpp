#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
   {
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int money=(k*x)+(n-k)*(min(x,y));
    cout<<money<<endl;
   }

 return 0; 
}