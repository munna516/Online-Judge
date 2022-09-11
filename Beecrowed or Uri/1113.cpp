/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1113   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  for (;;)
  {
    cin >> a >> b;
    if (a == b)
      break;
    else if (a > b)
    {
      cout << "Decrescente" << endl;
    }
    else if (a < b)
    {
      cout << "Crescente" << endl;
    }
  }

  return 0;
}