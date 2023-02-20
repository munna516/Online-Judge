#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2 << endl;
        else
        {
            ll a = n / 2;
            cout << a+1 << " " << a  << endl;
        }
    }

    return 0;
}
