/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1144   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, x, y, z;
  cin >> a;
  for (int i = 1; i <= a * 2; i++)
  {
    if (i % 2 == 0)
    {
      x = i / 2;
      y = (x * x) + 1;
      z = (x * y) - (x - 1);
      cout << x << " " << y << " " << z << endl;
    }

    else
    {
      x = ceil(i / 2.0);
      cout << x << " " << x * x << " " << x * x * x << endl;
    }
  }

  return 0;
}
