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
    int n;
    cin >> n;
    int ar[n];
    int sum = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
        r += ar[i] % 3;
    }
    cout << sum-r << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // ll _;
    // cin >> _;
    // while (_--)
    // {
    solve();
    // }
    return 0;
}