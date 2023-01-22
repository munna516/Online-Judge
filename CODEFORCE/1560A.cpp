/***  Problem Link :::  https://codeforces.com/problemset/problem/1560/A  ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, count = 0, i = 1;
        cin >> x;
        while (1)
        {
            if ((i % 3 != 0) && (i % 10 != 3))
            {
                count++;
                if (count == x)
                {
                    cout << i << endl;
                    break;
                }
            }
            ++i;
        }
    }

    return 0;
}
