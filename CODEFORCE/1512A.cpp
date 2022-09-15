/***  Problem Link :::  https://codeforces.com/problemset/problem/1512/A  ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n;
        int ary[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (ary[i] != ary[i - 1])
            {
                if(ary[i]!=ary[i+1])
                p = i ;
                else 
                p=i-1;
                break;
            }
        }
        cout << p +1 << endl;
    }

    return 0;
}
