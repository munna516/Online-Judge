/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2176   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int r = s.length();
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        if (s[i] == '1')
            count++;
    }
    if (count % 2 == 0)

        cout << s << "0" << endl;

    else
        cout << s << "1" << endl;

    return 0;
}