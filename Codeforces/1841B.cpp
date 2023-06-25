#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pai 3.14159
#define endl "\n"
#define vi vector<int>
#define pi pair<int, int>
/********************************************/
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    string s = "1";
    int count = 0;
    int x;
    cin >> x;
    v.push_back(x);
    n--;
    while (n--)
    {
        cin >> x;
        if (x < v.back() && count == 0 && x <= v.front())
        {
            count++;
            v.push_back(x);
            s += '1';
        }
        else if (x < v.back())
        {
            s += '0';
        }
        else if (count == 1 && x > v.front())
        {
            s += '0';
        }
        else
        {
            s += '1';
            v.push_back(x);
        }
    }
    cout << s << endl;
    
}
/********************************************/
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