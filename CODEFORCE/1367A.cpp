/***  Problem Link :::  https://codeforces.com/problemset/problem/1367/A  ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a, b{};
    cin >> a;
    char b[101];
    for (int i = 1, j = 1; i < a.length() - 1; i += 2, j++)
    {
      if (a[i] == a[i + 1])
      {
        b[j] = a[i];
      }
    }
    cout << b << endl;
  }

  return 0;
}
