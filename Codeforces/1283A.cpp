#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int x = 24 - h;
        cout << (x * 60) - m << endl;
    }

    return 0;
}
