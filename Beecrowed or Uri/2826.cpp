/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2826   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[21], s2[21];
    cin >> s1 >> s2;
    int x = strcmp(s1, s2);
    if (x < 0)
        cout << s1 << "\n"
             << s2 << endl;
    else if (x > 0)
        cout << s2 << "\n"
             << s1 << endl;

    return 0;
}