#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int even = 0, odd = 0;
        cin >> n;
        int ar[n*2];
        for (int i = 0; i < n*2; i++)
        {
            cin >> ar[i];
            if (ar[i] % 2 == 0)
                even++;
            else if (ar[i] % 2 != 0)
                odd++;
        }
        if (even == odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
