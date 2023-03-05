#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, count1 = 0, count2 = 0;
        cin >> n;
        ll ar[n], ar2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] % 2 != 0)
                count1++;
            if (ar[i] % 2 == 0)
                count2++;
        }
        if (count1 >= 3)
        {
            int a = 0;
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (a == 3)
                    break;
                if (ar[i] % 2 != 0)
                {
                    a++;
                    cout << i + 1 << " ";
                }
            }
            cout << "\n";
        }
        else if (count2 >= 2 && count1 >= 1)
        {
            cout << "YES" << endl;
            int m = 0, p = 0;
            for (int i = 0; i < n; i++)
            {
                if (m == 2)
                    break;
                if (ar[i] % 2 == 0)
                {
                    m++;
                    cout << i + 1 << " ";
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (p == 1)
                    break;
                if (ar[i] % 2 != 0)
                {
                    p++;
                    cout << i + 1 << " ";
                }
            }
            cout << "\n";
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
