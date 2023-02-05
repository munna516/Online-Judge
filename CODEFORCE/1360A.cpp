/***  Problem Link :::   https://codeforces.com/problemset/problem/1360/A ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            a = a * 2;
        else
            b = b * 2;
        int area = max(a, b);
        cout << area * area << endl;
    }

    return 0;
}
