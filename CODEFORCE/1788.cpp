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
        ll n, two = 0, one = 0;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 2)
                two++;
            else if (ar[i] == 1)
                one++;
        }
        if (two % 2 != 0)
            cout << "-1" << endl;
        else if (two == 0)
            cout << "1" << endl;
        else if (two % 2 == 0)
        {
            ll x = 0,i;
            ll total = two / 2;
            for ( i = 0; i < n; i++)
            {
                if (x == total)
                {
                    break;
                }
                if (ar[i] == 2)
                    x++;
            }
            cout << i << endl;
        }
    }

    return 0;
}
