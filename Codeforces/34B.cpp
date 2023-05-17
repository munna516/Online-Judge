#include <bits/stdc++.h>
using namespace std;
#define ISO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pi 3.1416
#define loop for (int i = 0; i < n; i++)
#define endl "\n"
#define yes                    \
    {                          \
        cout << "YES" << endl; \
    }
#define no                    \
    {                         \
        cout << "NO" << endl; \
    }
/*------------------------------------------------------------------------*/

void solve()
{
    int n, m, sum = 0,a=0;
    cin >> n >> m;
    int ar[n]{};
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    for (int i = 0; i < m; i++)
    {
        if (ar[i] <0 && a<=m)
            {sum += abs(ar[i]);a++;}
    }
    cout << sum << endl;
}
int main()
{
    ISO;
    //   ll _;
    //   cin >> _;
    //   while (_--)
    //   {
    solve();
    //   }
    return 0;
}
