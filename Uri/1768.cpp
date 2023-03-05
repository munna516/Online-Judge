/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1768   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  while (cin >> n)
  {
    int x = (n / 2) + 1;
    for (int i = 1; i <= x; i++)
    {
      for (int space = i; space <= n / 2; space++)
        cout << " ";
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        cout << "*";
      }
      cout << endl;
    }

    for (int i = 1; i <= 2; i++)
    {
      for (int space = i; space <= n / 2; space++)
        cout << " ";
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        cout << "*";
      }
      cout << endl;
    }
  }

  return 0;
}

