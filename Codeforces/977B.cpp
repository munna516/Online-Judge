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

void solve()
{
    int n, max = 0;
    cin >> n;
    string s, s1;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        int count = 0;
        for (int j = 0; j < s.length() - 1; j++)
        {
            if ((s[i] == s[j]) && (s[i + 1] == s[j + 1]))
                count++;
            if (count > max)
            {
                max = count;
                s1 = string(1, s[i]) + string(1, s[i + 1]);
            }
        }
    }
    cout << s1 << endl;
}
int main()
{
    ISO;
    //   ll _;
    //   cin >> _;
    //   while (_--)
    //   {
    solve();
    //   }
    return 0;
}
