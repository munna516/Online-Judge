/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1255   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t != 0)
    {
        int pos, max = 0;
        string s;
        getline(cin, s);
        int count[200]{};
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                pos = s[i];
                count[pos]++;
            }
            if (count[pos] > max)
            {
                max = count[pos];
            }
        }
        char c;
        for (int i = 97; i <= 122; i++)
        {
            if (count[i] == max)
            {
                c = i;
                cout << c;
            }
        }
        cout << endl;
        --t;
    }

    return 0;
}