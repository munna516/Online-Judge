/***  Problem Link :::  https://codeforces.com/problemset/problem/472/A  ***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll a, x, y;
  cin >> a;
  if (a % 2 == 0)
  {
    cout << 4 << " " << a - 4 << endl;
  }
  else
  {
    cout << 9 << " " << a - 9 << endl;
  }

  return 0;
}
