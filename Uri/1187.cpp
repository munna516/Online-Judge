#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int x = 12;
    double ar[x][x], sum = 0.0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < (x / 2) - 1; i++)
    {
        for (int j = i + 1; j < x - (i + 1); j++)
        {
            sum += ar[i][j];
        }
    }
    if (c == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else
        cout << fixed << setprecision(1) << sum / 30.0 << endl;
}