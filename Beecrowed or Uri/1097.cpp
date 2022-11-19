/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1097   ***/

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k = 7 ;
    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = 0; j <= 2; j++)
        {

            cout << "I=" << i << " "
                 << "J=" << k - j << endl;
        }
        k = k + 2;
    }
}
int main()
{
    solve();

    return 0;
}