/***  Problem Link :::  https://codeforces.com/problemset/problem/1399/A  ***/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> ary(x);
        for (int i = 0; i < x; i++)
        {
            cin >> ary[i];
        }
        bool count = true;
        sort(ary.begin(), ary.end());
        for (int i = 1; i < x; i++)
        {
            if ((ary[i] - ary[i - 1]) > 1)
            {
                count = false;
                break;
            }
        }
        if (count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
