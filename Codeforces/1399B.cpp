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
/****************************************/
void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min1)
            min1 = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] < min2)
            min2 = b[i];
    }
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > min1 && b[i] > min2)
        {
            int x = (a[i] - min1);
            int y = (b[i] - min2);
            count += max(x, y);
        }
        else
        {
            count += (a[i] - min1);
            count += (b[i] - min2);
        }
    }
    cout << count << endl;
}
/****************************************/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}