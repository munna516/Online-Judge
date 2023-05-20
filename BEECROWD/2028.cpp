/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2028   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 1;
    cin >> n;
    while (n != EOF)
    {

        if (n == 0)
        {
            cout << "Caso " << a << ": " << (n * (n + 1) / 2) + 1 << " numero" << endl;
            cout << "0"
                 << " ";
        }
        else
        {
            cout << "Caso " << a << ": " << (n * (n + 1) / 2) + 1 << " numero" << endl;
            cout << "0"
                 << " ";
            for (int i = 1; i <= n; i++)
            {

                for (int j = 1; j <= i; j++)
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl
             << endl;
        
        ++a;
        cin>>n;
    }

    return 0;
}