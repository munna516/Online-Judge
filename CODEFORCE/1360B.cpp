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
        ll n, x;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        ll min = 100000;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(A[i] - A[j]) < min)
                    min = abs(A[i] - A[j]);
            }
        }
        cout << min << endl;
        }
    return 0;
}
