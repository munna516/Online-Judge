#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'

void solve()
{
    ll n, count = 1, max = 0;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > ar[i - 1])
        {
            count++;
            if (count > max)
                max = count;
        }
        else
            count = 1;
    }
    if (max == 0)
        cout << "1" << endl;
    else
        cout << max << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
