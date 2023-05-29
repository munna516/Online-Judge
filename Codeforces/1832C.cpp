#include <bits/stdc++.h>
using namespace std;
#define ISO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pai 3.14159
#define endl "\n"
#define vi vector<int>
#define pi pair<int, int>
/*----------------------------------*/
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    n = unique(v.begin(), v.end()) - v.begin();
    int ans = n;
    for (int i = 0; i + 2 < n; i++)
    {
        if ((v[i] < v[i + 1] && v[i + 1] < v[i + 2]))
            ans--;
        if (v[i] > v[i + 1] && v[i + 1] > v[i + 2])
            ans--;
    }
    cout << ans << endl;
}
/*----------------------------------*/
int main()
{
    ISO;
    ll _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}
