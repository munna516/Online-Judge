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
int main()
{
    char s[100];
    while (gets(s))
    {
        int k = strlen(s);
        bool up = false, lo = false, digit = false;
        if (k < 6 || k > 32)
            cout << "Senha invalida." << endl;
        else
        {
            bool others = true;
            for (int i = 0; i < k; i++)
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                    up = true;
                else if (s[i] >= 'a' && s[i] <= 'z')
                    lo = true;
                else if (s[i] >= '0' && s[i] <= '9')
                    digit = true;
                else
                {
                    others = false;
                    break;
                }
            }
            if (up && lo && digit && others)
                cout << "Senha valida." << endl;
            else
                cout << "Senha invalida." << endl;
        }
       
    }
    return 0;
}