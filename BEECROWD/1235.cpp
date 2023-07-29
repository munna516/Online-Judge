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
    string s;
    getline(cin, s);
    int x = s.length() / 2;
    for (int i = x - 1; i >= 0; i--)
        cout << s[i];
    for (int i = s.length() - 1; i >= x; i--)
        cout << s[i];
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll _;
    cin >> _;
    cin.ignore();
    while (_--)
    {
        solve();
    }
    return 0;
}