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
    string s1, s2;
    cin >> s1 >> s2;
    cin.ignore();
    int a = 0, b = 0;
    for (int i = 0; i <= 50; i++)
    {
        if (s1[i] == '\0')
            a = 1;
        if (s2[i] == '\0')
            b = 1;
        if (a == 1 && b == 1)
            break;
        if (a == 0)
            cout << s1[i];
        if (b == 0)
            cout << s2[i];
    }
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