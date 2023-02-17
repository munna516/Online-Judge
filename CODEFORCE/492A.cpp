#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, sum = 0, height = 0;
    cin >> n;
    for (int i = 1;; i++)
    {
        sum = sum + ((i * (i + 1)) / 2);
        if (sum > n)
        {
            height = i - 1;
            break;
        }
    }
    cout << height << endl;

    return 0;
}
