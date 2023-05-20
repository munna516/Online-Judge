#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double ar[12][12];
    char c;
    double sum = 0.0;

    cin >> c;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> ar[i][j];
            if (j < (11 - i) && j < i)
            {
                sum += ar[i][j];
            }
        }
    }

    if (c == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum / 30.0);
    return 0;
}