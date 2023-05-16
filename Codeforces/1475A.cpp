#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'

void solve()
{
    ll x, count = 0, a, b, c;
    cin >> x;
    while (x != 0)
    {
        if (x % 2 == 1)
            count++;
        x = x / 2;
    }
    if (count > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
