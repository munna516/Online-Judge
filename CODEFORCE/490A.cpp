/***  Problem Link :::  https://codeforces.com/problemset/problem/490/A  ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i = 0, programmer = 0, math = 0, physics = 0, team, p = 0, q = 0, r = 0;
    cin >> t;
    int ary[t];
    while (t--)
    {
        cin >> ary[i];
        if (ary[i] == 1)
            programmer++;
        else if (ary[i] == 2)
            math++;
        else if (ary[i] == 3)
            physics++;
    }
    team = min(min(programmer, math), min(math, physics));
    cout<<team<<endl;

    for (int i = 0; i < t; i++)
    {
        if (ary[i] == 1)
            p = i;
        else if (ary[i] == 2)
            q = i;
        else if (ary[i] == 3)
            r = i;
        if (p > 0 && q > 0 && r > 0)
        {
            cout << p << " " << q << " " << r << endl;
            p = 0;
            q = 0;
            r = 0;
        }
    }
    return 0;
}
