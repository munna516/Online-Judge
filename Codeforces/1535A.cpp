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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = max(a, b);
        int y = max(c, d);
        int p = min(a, b);
        int q = min(c, d);
        if (x > q && y > p)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
