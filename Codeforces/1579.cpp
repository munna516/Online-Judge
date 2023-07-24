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
void ifndef()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
void solve()
{
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A')
            a++;
        else if (s[i] == 'B')
            b++;
        else if (s[i] == 'C')
            c++;
    }
    if (a + c == b)
        yes else no
}
int main()
{
    ifndef();
    ll _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}
