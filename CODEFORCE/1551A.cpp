#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll n = x / 3;
        ll a = x - n;
        if (a % 2 == 0)
            cout << n << " " << a / 2 << endl;
        else
            cout << n + 1 << " " << a / 2 << endl;
    }

    return 0;
}
