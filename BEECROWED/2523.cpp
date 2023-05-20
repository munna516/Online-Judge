/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2523   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    while (cin >> s)
    {
        int n, i;
        cin >> n;
        int ary[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << s[ary[i] - 1];
        }
        cout << endl;
    }

    return 0;
}