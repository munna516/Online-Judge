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
    while (cin >> a >> b >> c)
    {
        if ((a == 1 && b == 1 && c == 0) || (a == 0 && b == 0 && c == 1))
            cout << "C" << endl;
        else if ((a == 1 && b == 0 && c == 1) || (a == 0 && b == 1 && c == 0))
            cout << "B" << endl;
        else if ((a == 1 && b == 0 && c == 0) || (a == 0 && b == 1 && c == 1))
            cout << "A" << endl;
        else
            cout << "*" << endl;
     
    }
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