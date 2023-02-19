#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, maxx = 0, maxxind = 0, minn = 101, minnind = 0;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > maxx)
        {
            maxx = a[i];
            maxxind = i;
        }
        if (a[i] <= minn)
        {
            minn = a[i];
            minnind = i;
        }
    }
    if (maxxind < minnind)
    {
        cout << (maxxind - 1) + (n - minnind);
    }
    else
    {
        cout << (maxxind - 1) + (n - minnind - 1);
    }
}
