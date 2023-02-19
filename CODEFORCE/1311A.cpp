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
        ll x, y;
        cin >> x >> y;
        if (x == y)
            cout << x - y << endl;
        else if (x < y)
        {
            if ((y - x) % 2 == 0)
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
        else if (x > y)
        {
            if ((x - y) % 2 == 0)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
    }

    return 0;
}
