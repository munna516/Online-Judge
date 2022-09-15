/***  Problem Link :::  https://codeforces.com/problemset/problem/758/A  ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, total=0;
    cin >> x;
    vector<int> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < x; i++)
    {
        total += (a[x - 1] - a[i]);
    }
    cout << total << endl;

    return 0;
}
