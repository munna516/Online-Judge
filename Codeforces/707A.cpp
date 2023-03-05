#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, count = 0;
    cin >> m >> n;
    char ary[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ary[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ary[i][j] == 'C' || ary[i][j] == 'M' || ary[i][j] == 'Y')
            {
                count++;
                break;
            }
        }
    }
    if (count == 0)
        cout << "#Black&White" << endl;
    else
        cout << "#Color" << endl;
    return 0;
}
