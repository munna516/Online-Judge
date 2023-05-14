#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'
/****************************************/
void solve()
{
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (count == 1)
            {
                cout << " ";
                count = 0;
            }
        }
        else
        {
            cout << s[i];
            count = 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //   ll t;
    //   cin >> t;
    //   while (t--)
    //{
    solve();
    //}
    return 0;
}
