#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x = 12;
    double ar[x][x];
    char c;
    double sum = 0.0;

    cin >> c;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> ar[i][j];
            if (j > 11 - i)
            {
                sum += ar[i][j];
            }
        }
    }

    if (c == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum / 66.0);
    return 0;
}