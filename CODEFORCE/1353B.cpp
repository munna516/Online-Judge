/***  Problem Link :::   https://codeforces.com/problemset/problem/1353/B ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum1 = 0, temp;
        cin >> n >> k;
        int ar1[n], ar2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }
        sort(ar1, ar1 + n);
        sort(ar2, ar2 + n);
        for (int i = n - 1, j = 0; i >= 0; i--, j++)
        {
            if (ar2[i] > ar1[j] && k > 0)
            {
                swap(ar1[j], ar2[i]);
                k--;
            }
            sum1 += ar1[j];
        }
        cout << sum1 << endl;
    }
    return 0;
}
