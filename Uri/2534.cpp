#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, x;
    int a[100];
    while (cin >> n >> q)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        for (int i = 0; i < q; i++)
        {
            cin >> x;
            cout << a[x - 1] << endl;
        }
    }

    return 0;
}