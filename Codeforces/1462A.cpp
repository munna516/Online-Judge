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
        ll n;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        if (n % 2 == 0)
        {
            for (int i = 0, j = n - 1; i < j; i++, j--)
            {
                cout << ar[i] << " " << ar[j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0, j = n - 1; i < j; i++, j--)
            {
                cout << ar[i] << " " << ar[j] << " ";
            }
            cout << ar[n / 2] << endl;
        }
    }

    return 0;
}
