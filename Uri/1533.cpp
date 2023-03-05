/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1533   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, first_max, second_max, pos;
    cin >> n;
    while (n != 0)
    {
        first_max = second_max = pos = 0;
        int ar[1001];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (first_max < ar[i])
                first_max = ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (second_max < ar[i] && ar[i] != first_max)
            {
                second_max = ar[i];
                pos = i;
            }
        }
        cout << pos + 1 << endl;
        cin >> n;
    }

    return 0;
}