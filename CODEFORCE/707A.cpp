/***  Problem Link :::  https://codeforces.com/contest/707/problem/A  ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, count = 0;
    cin >> m >> n;
    char  ary[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ary[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ary[i][j] == 'W' || ary[i][j] == 'B')
            {
                count++;
                break;
            }
        }
    }
    if (count == 0)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
    return 0;
}
