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
    for (int i = (x / 2) + 1; i < x; i++)
    {
        for (int j = x - i; j < x - (x - i); j++)
        {
            sum += ar[i][j];
        }
    }
    if (c == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else
        cout << fixed << setprecision(1) << sum / 30.0 << endl;
}