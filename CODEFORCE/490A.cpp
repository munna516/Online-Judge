#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i = 0, programmer = 0, math = 0, physics = 0, team;
    cin >> n;
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
        if (ary[i] == 1)
            programmer++;
        else if (ary[i] == 2)
            math++;
        else if (ary[i] == 3)
            physics++;
    }
    team = min(min(programmer, math), min(math, physics));
    cout << team << endl;
    for (int j = 0; j < team; j++)
    {
        ll p = 0, q = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (ary[i] == 1)
            {
                p = i + 1;
                ary[i] = 0;
            }
            if (ary[i] == 2)
            {
                q = i + 1;
                ary[i] = 0;
            }
            if (ary[i] == 3)
            {
                r = i + 1;
                ary[i] = 0;
            }
        }
        if (p > 0 && q > 0 && r > 0)
        {
            cout << p << " " << q << " " << r << endl;
            p = 0;
            q = 0;
            r = 0;
        }
    }

    return 0;
}
