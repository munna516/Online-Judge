/***  Problem Link ::: https://codeforces.com/contest/1790/problem/A   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string s;
        cin >> s;

        if (s.length() > 4 && (s[0] == '3' && s[1] == '1' && s[2] == '4' && s[3] == '1') && s[4] == '5')
            cout << s.length() << endl;

        else if (s[0] == '3' && s[1] == '1' && s[2] == '4' && s[3] == '1')
            cout << "4" << endl;
        else if (s[0] == '3' && s[1] == '1' && s[2] == '4')
            cout << "3" << endl;
        else if (s[0] == '3' && s[1] == '1')
            cout << "2" << endl;
        else if (s[0] == '3')
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}
