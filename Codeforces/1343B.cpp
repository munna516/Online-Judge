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
        ll x = n / 2;

        if (x % 2 != 0)
            cout << "NO";
        else
        {
            cout << "YES" << endl;
            ll A[n], sum1 = 0, sum2 = 0;
            for (int i = 0, k = 2; i < x; i++, k += 2)
            {
                A[i] = k;
                sum1 += A[i];
            }
            for (ll i = x, j = 1; i < n - 1; i++, j += 2)
            {
                A[i] = j;
                sum2 += A[i];
            }
            A[n - 1] = sum1 - sum2;
            for (ll i = 0; i < n; i++)
                cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
