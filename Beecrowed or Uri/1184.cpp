#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    float ar[12][12], sum = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
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