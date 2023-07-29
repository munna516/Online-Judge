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

    string s, s1;
    getline(cin, s);
    int x = (s.length() / 2);
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            s[i] = (char)(s[i] + 3);
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (i >= x)
            cout << (char)(s[i] - 1);
        else
        {
            cout << s[i];
        }
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