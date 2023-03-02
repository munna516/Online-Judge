#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {

        int ar[10]{};
        for (int i = 0; i < s.length(); i++)
        {
            ar[s[i] - 48]++;
        }
        int max = -1, p = 0;
        for (int i = 0; i < 10; i++)
        {
            if (ar[i] >= max)
            {
                max = ar[i];
                p = i;
            }
        }
        cout << p << endl;
    }
    return 0;
}