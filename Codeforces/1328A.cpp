#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
  {
     long long int x, y; 
     cin >> x >> y;
 
        long long int  rem = x % y;
        long long int ans = abs(y - rem);
        if (ans == y)
        {
            ans = 0;
        }
        
        cout << ans<< endl;
            
  }
  
  

 return 0; 
}