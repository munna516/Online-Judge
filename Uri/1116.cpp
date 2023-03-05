/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1144   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    float x, y;
    cout << fixed << setprecision(1);
    cin >> x >> y;
    if (y == 0)
      cout << "divisao impossivel" << endl;
    else
      cout << x / y << endl;
  }

  return 0;
}