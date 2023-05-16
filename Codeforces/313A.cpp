#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'

void solve()
{
    int x, a, b, c, d;
    cin >> x;
    if (x > 0)
        cout << x << endl;
    else
    {
        a = x / 10;
        b = x % 10;
        c = x / 100;
        d = (c * 10) + b;
        if (a >= d)
            cout << a << endl;
        else
            cout << d << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}