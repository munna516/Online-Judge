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

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    while (a > 0 && b && a / 2 + 10 < a)
    {
        b--;
        a = a / 2 + 10;
    }

    if (a <= c * 10)
        yes else no
}
int main()
{
    ISO;
    ll _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}
