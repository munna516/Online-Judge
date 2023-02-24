#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((a * b) % 2 == 0)
            cout << (a * b) / 2 << endl;
        else
            cout << ((a * b) / 2) + 1 << endl;
    }

    return 0;
}
