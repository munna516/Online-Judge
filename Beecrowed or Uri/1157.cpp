/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1157   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}