#include <bits/stdc++.h>
using namespace std;
// vowel check


int main()
{
  string s;
    std::cin >> s;
    for (int i = 0; i < s.length(); i++) 
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.length(); i++) 
    {
        for (int j = 1; j < s.length(); j++) 
        {
 
 
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o' || s[i] == 'i' || s[i] == 'y' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'O' || s[i] == 'I' || s[i] == 'Y'
                )
            {
                s.erase(s.begin() + i);
                i = 0;
                j = i;
 
            }
 
        }
    }
    for (int i = 0; i < s.length(); i++)
     {
            cout << "." << s[i];
        
    }

  return 0;
}