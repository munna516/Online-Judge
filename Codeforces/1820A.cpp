#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long count = 1, ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '_')
                count++;
            else
            {
                ans += max(0ll, count - 1);
                count = 0;
            }
        }
        ans += count;
        if (s.size() == 1 && s[0] == '^')
            ans = 1;
        cout << ans << "\n";
    }
    return 0;
}
