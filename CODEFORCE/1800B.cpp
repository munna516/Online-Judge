#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, count = 0, sum = 0;
        cin >> n >> k;
        string s;
        getchar();
        getline(cin, s);
        ll ar1[26]{}, ar2[26]{}, ar3[26]{};
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                ar1[s[i] - 65]++;
            if (s[i] >= 'a' && s[i] <= 'z')
                ar2[s[i] - 97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            count += min(ar1[i], ar2[i]);
            ar3[i] = abs(ar1[i] - ar2[i]) / 2;
            sum += ar3[i];
        }

        if (k > sum)
            cout << count + sum << endl;
        else if (sum > k)
            cout << count + k << endl;
        else
            cout << count + k << endl;
    }
    return 0;
}