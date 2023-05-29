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
bool find(int n, int m)
{
    if (n == m)
        return true;
    else if (n % 3 != 0)
        return false;
    else
    {
        return (find(n / 3, m) || find(2 * n / 3, m));
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    cout << (find(n, m) ? "YES" : "NO") << endl;
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
