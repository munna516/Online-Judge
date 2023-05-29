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
/*----------------------------------*/
void solve()
{
    vector<int> v;
    int n, k;
    cin >> n >> k;
    int ar1[n], ar2[n];
    for (int i = 0; i < n; i++)
        cin >> ar1[i];
    for (int i = 0; i < n; i++)
        cin >> ar2[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(ar1[i] - ar2[j]) <= k)
            {
                v.push_back(ar2[j]);
                ar2[j] = -1;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

   //for(int i =0;)
    cout << endl;
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
