/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1172   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ary1[10], ary2[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> ary1[i];
        if (ary1[i] <= 0)
            ary2[i] = 1;
        else
            ary2[i] = ary1[i];
    }
    for (int i = 0; i < 10; i++)
        cout<<"X["<<i<<"] = " << ary2[i] << endl;

    return 0;
}