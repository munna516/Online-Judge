#include <bits/stdc++.h>
using namespace std;

// #define int long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, count = 0, a, b;
        cin >> x;
        while (x != 0)
        {
            a = x % 10;
            count++;
            x = x / 10;
        }
        b = (a - 1) * 10;
        cout << b + (count * (count + 1) / 2) << endl;
    }
    return 0;
}

// Another Solution
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int dig = x[0] - '0' - 1;
        cout << dig << endl;
        int len = x.size();
        cout << dig * 10 + len * (len + 1) / 2 << endl;
    }

    return 0;
}*/