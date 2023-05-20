/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1170   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        double a, day = 0;
        cin >> a;
        while (a > 1)
        {
            
            a = a / 2;
            day++;
        }
        cout << day <<" dias"<< endl;
    }

    return 0;
}