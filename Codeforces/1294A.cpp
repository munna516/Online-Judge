#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll sum = a + b + c + n;
        if ((sum % 3 == 0) && (sum / 3 >= a) && (sum / 3 >= b) && (sum / 3 >= c))

            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
