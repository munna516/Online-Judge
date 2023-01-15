/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1182   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double ary[12][12], sum = 0;
    char s;
    cin >> s;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> ary[i][j];
        }
    }

    for (int i = n; i <= n; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            sum += ary[j][i];
        }
    }

    cout << fixed << setprecision(1);
    if (s == 'S')
        cout << sum << endl;
    else
        cout << sum / (double)12 << endl;

    return 0;
}