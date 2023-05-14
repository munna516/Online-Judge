#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'
/****************************************/
void solve()
{
    int n, m;
    cin >> n >> m;
    int x = min(m, n);
    if (x % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //   ll t;
    //   cin >> t;
    //   while (t--)
    //{
    solve();
    //}
    return 0;
}
