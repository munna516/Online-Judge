/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1177   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 0;
    vector<int> ary(1000);
    for (int i = 0; i < 1000; i++)
    {
        if (k == n)
        {
            k = 0;
        }
        cout << "N[" << i << "] = " << k << endl;
        k++;
    }

    return 0;
}