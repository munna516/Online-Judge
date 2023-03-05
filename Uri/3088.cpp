#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                if (s[i + 1] == ',' || s[i + 1] == '.')
                {
                    cout << s[i + 1];
                    ++i;
                }
                else
                    cout << s[i];
            }

            else
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}