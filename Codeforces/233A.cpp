#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
        cout << "-1" << endl;
    else
    {
        for (int i = n; i >= 1; i--)
            cout << i << " ";
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
