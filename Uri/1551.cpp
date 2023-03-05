#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ar[26]{}, count = 0;
        string s;
        getchar();
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                ar[s[i] - 97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (ar[i] > 0)
                count++;
                }
        if (count == 26)
            cout << "frase completa" << endl;
        else if (count >= 13)
            cout
                << "frase quase completa" << endl;
        else
            cout << "frase mal elaborada" << endl;
    }

    return 0;
}
