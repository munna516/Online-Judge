#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'

void solve()
{
    vector<int> a(3);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    if (a[1] != a[2])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl
             << a[0] << " " << a[0] << " " << a[2] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
