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
        ll n, x, result = 1;
        cin >> n >> x;
        int a = 2;
        while (a < n)
        {
            a += x;
            result++;
        }
        cout << result << endl;
    }
    return 0;
}
