#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        ll k = (n - y) / x;
        ll p = k * x + y;
        cout << p << endl;
    }

    return 0;
}
