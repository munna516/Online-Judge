#include <bits/stdc++.h>
using namespace std;
#define ISO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define pi 3.1416
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
/*----------------------------------*/
int main()
{
    // ISO;
    ll _;
    cin >> _;
    while (_--)
    {
        string s;
        cin >> s;
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                count0++;
            if (s[i] == '1')
                count1++;
        }

        if (min(count0, count1) % 2 == 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    return 0;
}
