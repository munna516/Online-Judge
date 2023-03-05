#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int sum = 0, x, y, t;
    char s[110];
    cin >> s;
    s[-1] = 'a';
    for (int i = 0; i < strlen(s); i++)
    {
        x = abs(s[i] - s[i - 1]);
        y = 26 - abs(s[i] - s[i - 1]);
        sum += min(x, y);
    }

    cout << sum << endl;

    return 0;
}
