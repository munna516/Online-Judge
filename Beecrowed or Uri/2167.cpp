/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2167   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos, count = 1;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (array[i] < array[i - 1])
        {
            pos = i + 1;
            break;
        }
        else
        {
            count++;
        }
    }
    if (count == n)
        cout << 0 << endl;
    else
        cout << pos << endl;
    return 0;
}