/***  Problem Link :::  https://codeforces.com/problemset/problem/427/A  ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, count = 0, x = 0;
    cin >> n;
    long long ary[n];
    for (int i = 0; i < n; i++)
        cin >> ary[i];

    for (int i = 0; i < n; i++)
    {
        if (ary[i] > 0)
        {
            x += ary[i];
        }
        else if (x > 0 && ary[i] == -1)
        {
            x--;
        }
        else
            count++;
    }
    cout << count << endl;
    return 0;
}
