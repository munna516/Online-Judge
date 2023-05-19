#include <bits/stdc++.h>
using namespace std;
#define ISO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pi 3.1416
#define endl "\n"
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}
/*------------------------------------------------------------------------*/
string s1= "qwertyuiop asdfghjkl; zxcvbnm,./";
void solve()
{
    
    char c ;
    cin>>c;
    string s;
    cin>>s;
    if(c=='R')
    {
        for(int i = 0;i<s.length();i++)
        {
            for(int j=0;j<s1.length();j++)
            {
                if(s[i]==s1[j])
                cout<<s1[j-1];
            }
        }

    }
    else 
    {
        for(int i = 0;i<s.length();i++)
        {
            for(int j=0;j<s1.length();j++)
            {
                if(s[i]==s1[j])
                cout<<s1[j+1];
            }
        }

    }

}
int main()
{
  ISO;
//   ll _;
//   cin >> _;
//   while (_--)
//   {
    solve();
//   }
  return 0;
}
