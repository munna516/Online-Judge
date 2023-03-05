/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1133   ***/

#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  for (int i = (min(a, b)) + 1; i < max(a, b); i++)
  {
    if (i % 5 == 2 || i % 5 == 3)
    {
      cout << i << endl;
    }
  }

  return 0;
}