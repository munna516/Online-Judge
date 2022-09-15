/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1198   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    while (cin >> a >> b)
    {

        if (a >= b)
            cout << a - b << endl;
        else
            cout << b - a << endl;
    }

    return 0;
}