#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string s;
        cin >> s;
        if (s.length() % 2 == 0)
        {
            int x = s.length() / 2;
            for (int i = 0, j = x; i < x, j < s.length(); i++, j++)
            {
                if (s[i] != s[j])
                    count++;
            }
            if (count == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
