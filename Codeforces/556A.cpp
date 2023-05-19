#include <bits/stdc++.h>
using namespace std;
#define ISO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pi 3.1416
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
/*------------------------------------------------------------------------*/

void solve()
{
    int n, count0 = 0, count1 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            count0++;
        else
            count1++;
    }
    int x = min(count0, count1);
    cout << n - (2 * x) << endl;
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
