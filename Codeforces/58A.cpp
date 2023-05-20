#include <bits/stdc++.h>
using namespace std;
#define ISO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pi 3.1416
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
/*----------------------------------*/
string s1 = "1234";
void solve()
{
    string s, s2;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.length() == 4)
            break;
        if (s[i] == 'h')
        {
            s2 += '1';
        }
        else if (s[i] == 'e')
            s2 += '2';
        else if (s[i] == 'l' && s[i + 1] == 'l')

            s2 += '3';
        else if (s[i] == 'o')
            s2 += '4';
    }
    cout<<s2<<endl;
    // if(s2==s1)
    // yes
    // else
    // no
    int count = 0;
    for (int i = 1; i < s2.length(); i++)
    {
        int x = stoi(s2[i]);
        if ((s2[i] - s2[i - 1] != 0) || (s2[i] - s2[i - 1] != 1))
        {
            count++;
            break;
        }
    }
    cout<<count<<endl;
    if(count)
    no
    else 
    yes
}
int main()
{
    ISO;
    // ll _;
    // cin >> _;
    // while (_--)
    // {
    solve();
    // }
    return 0;
}
