
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while (cin >> a)
    {
        int size = a / 3;
        bool p = false;
        for (int i = 0; i < a; i++)
        {
            if (i == size)
                p = true;
            if (a - i == size)
                p = false;
            if (!p)
            {
                for (int j = 0; j < a; j++)
                {
                    if (a - 1 - j == i)
                    {
                        cout << 3;
                        continue;
                    }
                    if (i == j)
                    {
                        cout << 2;
                    }
                    else
                    {
                        cout << 0;
                        continue;
                    }
                }
                cout << endl;
            }
            else
            {
                for (int j = 0; j < a; j++)
                {
                    if (i == a / 2 && j == a / 2)
                        cout << 4;
                    else if (j < size)
                        cout << 0;
                    else if (a - 1 - j < size)
                        cout << 0;
                    else
                        cout << 1;
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}