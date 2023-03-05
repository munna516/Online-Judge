/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2172   ***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll a, b;
  for (;;)
  {
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
      break;
    }
    else
      cout << a * b << endl;
  }

  return 0;
}