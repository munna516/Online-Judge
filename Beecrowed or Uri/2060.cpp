/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2060   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    int two = 0, three = 0, four = 0, five = 0;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x % 2 == 0)
            two++;
        if (x % 3 == 0)
            three++;
        if (x % 4 == 0)
            four++;
        if (x % 5 == 0)
            five++;
    }
    cout << two << " Multiplo(s) de " << 2 << endl;
    cout << three << " Multiplo(s) de " << 3 << endl;
    cout << four << " Multiplo(s) de " << 4 << endl;
    cout << five << " Multiplo(s) de " << 5 << endl;

    return 0;
}