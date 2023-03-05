#include <bits/stdc++.h>
using namespace std;

#define ll long long
int prime_check(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, y;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++)
    {
       y = prime_check(i);
        if (y > 0)
            break;
    }
    if (y == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
