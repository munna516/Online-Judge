#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, r, q, t;
    cin >> a >> b;
    t = a;
    if (a < 0 ||b<0)
    {
        int i = 1;
        while (1)
        {
            if (a % b == 0)
            {
                q = a / b;
                r = t - a;
                break;
            }

            a = a - i;
        }
    }

    else
    {
         q = a / b;
         r = a % b;
    }
    cout << q << " " << r << endl;

    return 0;
}