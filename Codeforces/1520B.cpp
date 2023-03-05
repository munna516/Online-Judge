#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long c = 0, s = 0;
        for (int i = 1; i <= 9; i++)
        {
            s = i;
            while (s <= n)
            {
                s = s * 10 + i;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}