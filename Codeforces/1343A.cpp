#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;

    ll k = 2;
    while (1)
    {
        int x = pow(2, k) - 1;
        if (n % x == 0)
        {
            cout << n / x << endl;
            break;
        }
        else
            k++;
    }
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
