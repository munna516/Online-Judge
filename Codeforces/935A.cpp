#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, count = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            count++;
    }
    cout << count << endl;

    return 0;
}
