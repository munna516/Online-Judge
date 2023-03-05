#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, one = 0, two = 0;
        cin >> n;
        ll A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] == 1)
                one++;
            else if (A[i] == 2)
                two++;
        }
        if (one == 0)
        {
            if (two % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (one % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
