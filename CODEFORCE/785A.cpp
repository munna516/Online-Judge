/***  Problem Link :::  https://codeforces.com/problemset/problem/785/A  ***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n, sum = 0;
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    if (s == "Tetrahedron")
      sum += 4;
    else if (s == "Cube")
      sum += 6;
    else if (s == "Octahedron")
      sum += 8;
    else if (s == "Dodecahedron")
      sum += 12;
    else if (s == "Icosahedron")
      sum += 20;
  }
  cout << sum << endl;
  return 0;
}
