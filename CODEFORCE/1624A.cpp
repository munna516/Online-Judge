#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        cout << ar[n - 1] - ar[0] << endl;
    }

    return 0;
}
