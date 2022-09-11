/***  Problem Link :::  https://codeforces.com/problemset/problem/581/A  ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int red, blue, x, y, z, day;
  cin >> red >> blue;
  x = max(red, blue);
  y = min(red, blue);
  z = x - y;

  if (z % 2 == 0)
    day = z / 2;
  else
    day = z/2;

  cout << y << " " << day << endl;

  return 0;
}
