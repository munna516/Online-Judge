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

    while (1)
    {
        char c;
        string s;
        cin >> c;
        cin.ignore();
        cin >> s;
        string s1;
        if (c == '0' && s[0] == '0')
            break;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
                continue;
            else
                s1 += s[i];
        }
        long long x = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            x = (x * 10) + s1[i] - '0';
        }
        cout << x << endl;
    }
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