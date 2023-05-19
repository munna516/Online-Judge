#include <bits/stdc++.h>
using namespace std;
#define ISO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pi 3.1416
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
/*------------------------------------------------------------------------*/

void solve()
{
    int n, sum = 0, s = 0, count = 0;
    cin >> n;
    int ar[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    sort(ar, ar + 12, greater<int>());
    if (sum < n)
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < 12; i++)
        {
            if (s >= n)
                break;
            s += ar[i];
            count++;
        }
        cout << count << endl;
    }
}
int main()
{
    ISO;
    solve();
    return 0;
}

// sort(ar,ar+n,greater<int>());
