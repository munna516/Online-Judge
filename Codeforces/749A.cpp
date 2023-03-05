#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll x = n / 2;
    if (n % 2 == 0)
    {
        cout << x << endl;
        for (int i = 0; i < x; i++)
        {
            cout << "2"
                 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << x << endl;
        for (int i = 0; i < x - 1; i++)
        {
            cout << "2"
                 << " ";
        }
        cout << "3" << endl;
    }

    return 0;
}
