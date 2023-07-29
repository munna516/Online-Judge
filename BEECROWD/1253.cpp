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
    cin >> s;
    cin.ignore();
    int n;
    cin >> n;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] - n <= 64)
        {
            int x = (s[i] - 64);
            cout << (char)(90 - (n - x));
        }
        else
            cout << (char)(s[i] - n);
    }
    cout << endl;
}
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