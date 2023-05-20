#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int x = 12;
    float ar[x][x], sum = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i > j)
                sum += ar[i][j];
        }
    }
    if (c == 'S')
        cout << sum << endl;
    else
        cout << sum / 66 << endl;
}