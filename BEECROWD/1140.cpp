#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pai 3.14159
const int N = 1e9 + 7;
#define endl "\n"
#define vi vector<int>
#define pi pair<int, int>
// void solve()
// {

// }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // ll _;
    // cin >> _;
    // while (_--)
    // {
    string s;
    while (getline(cin, s))
    {

        int count = 0;
        if (s[0] == '*')
            break;
        else
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            for (int i = 1; i < s.length(); i++)
            {
                if ((s[i - 1] == ' ') && (s[i] != s[0] || s[i] != s[0]))
                {
                    count++;
                    break;
                }
            }

            if (count == 0)
                cout << "Y" << endl;
            else
                cout << "N" << endl;
        }
    }
    // }
    return 0;
}