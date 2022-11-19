/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/100   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,x;
    cin >> n >> m;
    while (n != 0 && m != 0)
    {
        int count = 0;
        int ar[10001]{0};
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            ++ar[x];
            if (ar[x] == 2)
                count++;
        }

        cout << count << endl;
        cin >> n >> m;
    }

    return 0;
}