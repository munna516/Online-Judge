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
    int n, a = 0;
    cin >> n;
    string s, s1;
    cin >> s;
    int i = 0, j = s.length() - 1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j] && count > 0)
            {
                a = 1;
                break;
            }
            if (s[i] != s[j])
                count++;
        }
    }
    if (a == 1)
        no else yes
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