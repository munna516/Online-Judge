#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        int n, ar[26]{}, count = 0;
        cin >> n;
        string s;
        cin >> s;
        int mm, ee, oo, ww, m1, e1, o1, w1;
        mm = ee = oo = ww = 0;
        m1 = e1 = o1 = w1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'm' || s[i] == 'M')
                mm++;
            if (s[i] == 'e' || s[i] == 'E')
                ee++;
            if (s[i] == 'o' || s[i] == 'O')
                oo++;
            if (s[i] == 'w' || s[i] == 'W')
                ww++;
        }
        for (int i = 0; i < mm; i++)
        {
            if (s[i] == 'm' || s[i] == 'M')
                m1++;
        }
        for (int i = mm; i < mm + ee; i++)
        {
            if (s[i] == 'e' || s[i] == 'E')
                e1++;
        }
        for (int i = ee; i < mm + ee + oo; i++)
        {
            if (s[i] == 'o' || s[i] == 'O')
                o1++;
        }
        for (int i = oo; i < mm + ee + oo + ww; i++)
        {
            if (s[i] == 'w' || s[i] == 'W')
                w1++;
        }
        if (((mm == m1) && (ee = e1) && (oo = o1) && (ww = w1)) && (mm + ee + oo + ww == n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

