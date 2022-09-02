/***  Problem Link ::: https://codeforces.com/problemset/problem/520/A   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, a[26] = {0}, t=0;
  cin >> n;
  string s;
  cin >> s;
  
  transform(s.begin(), s.end(), s.begin(), ::tolower);

  for (int i = 0; s[i]!='\0'; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      a[s[i] - 97] = 1;
    }
  }

  for (int i = 0; i < 26; i++)
  {
    t += a[i];
  }

  if (t == 26)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
