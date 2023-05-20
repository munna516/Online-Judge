/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1175   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ary[20], arry[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> ary[i];
    }

    for (int i = 0, j = 20-1; i < 20; i++, j--)
    {
        arry[i] = ary[j];
        cout << "N[" << i << "] = " << ary[j] << endl;
    }

    return 0;
}