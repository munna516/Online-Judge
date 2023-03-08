#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'

void solve()
{
    int n, count = 0;
    cin >> n;
    string s1, s2;
    getchar();
    cin >> s1;
    getchar();
    cin >> s2;
    for (int i = 0; i < n; i++)
    {
        if ((s1[i] == 'R' && (s2[i] == 'B' || s2[i] == 'G')) || (s2[i] == 'R' && (s1[i] == 'B' || s1[i] == 'G')))
        {
            count++;
            break;
        }
    }
    if (count == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
