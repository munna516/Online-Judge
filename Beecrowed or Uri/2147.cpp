/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2147   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int x = s.length();

        cout << fixed << setprecision(2) << (float)x / 100 << endl;
    }

    return 0;
}