#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pai 3.14159
const int N = 1e9 + 7;
#define endl "\n"
#define vi vector<int>
#define pi pair<int, int>
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z;
    cin >> x >> y >> z;
    int p = x - a;
    int q = y - b;
    int r = z - c;
    int sum = 0;
    if (p >= 0)
        sum += p;
    if (q >= 0)
        sum += q;
    if (r >= 0)
        sum += r;
    cout << sum << endl;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // ll _;
    // cin >> _;
    // while (_--)
    // {
    solve();
    // }
    return 0;
}