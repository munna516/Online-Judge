#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    getchar();
    string s;
    getline(cin, s);

    ll one, two, three, four, i = 0;
    one = two = three = four = 0;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '1')
            one++;
        else if (s[i] == '2')
            two++;
        else if (s[i] == '3')
            three++;
        else if (s[i] == '4')
            four++;
    }

    cout << (a * one) + (b * two) + (c * three) + (d * four) << endl;

    return 0;
}
