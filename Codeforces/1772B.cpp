#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x = 3, swap = 0;
    cin >> t;
i:
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a < b && c < d) && (a < c && b < d))
        {
            cout << "YES" << endl;
            goto i;
        }
        else
        {
            while (x--)
            {
                swap = a;
                a = c;
                c = d;
                d = b;
                b = swap;
                if ((a < b && c < d) && (a < c && b < d))
                {
                    cout << "YES" << endl;
                    goto i;
                }
            }
            cout << "NO" << endl;
        }
    }
    return 0;
}