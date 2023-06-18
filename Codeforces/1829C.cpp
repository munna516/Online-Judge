#include <bits/stdc++.h>
using namespace std;
#define ISO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pai 3.14159
#define endl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ps pair<int, string>
/*----------------------------------*/
void solve()
{
    int x;
    cin >> x;
    vector<pair<int, string>> v(x);
    cin.ignore();
    for (int i = 0; i < x; i++)
    {
        cin >> v[i].first;
        cin.ignore();
        getline(cin, v[i].second);
    }
    int max1 = INT_MAX, max2 = INT_MAX, max3 = INT_MAX, a = 0, b = 0, c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second[0] == '1' && v[i].second[1] == '1')
        {
            max3 = min(max3, v[i].first);
            a++;
        }
        if (v[i].second[0] == '1' && v[i].second[1] == '0')
        {
            max1 = min(max1, v[i].first);
            b++;
        }
        if (v[i].second[0] == '0' && v[i].second[1] == '1')
        {
            max2 = min(max2, v[i].first);
            c++;
        }
    }
    if (b > 0 && c > 0)
    {
        int y = max1 + max2;
        cout << min(y, max3) << endl;
    }
    else if (a > 0)

    {
        if ((b == 0 && c > 0) || (c == 0 && b > 0) || (b == 0 && c == 0))
        {
            cout << max3 << endl;
        }
    }
    else
    {
        cout << "-1" << endl;
    }
}
/*----------------------------------*/
int main()
{
    ISO;
    ll _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}
