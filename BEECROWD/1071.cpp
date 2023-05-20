/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1071   ***/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, y, a, b, sum = 0;
  cin >> x >> y;
  a = min(x, y);
  b = max(x, y);
  for (int i = a + 1; i < b; i++)
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
  }

  cout << sum << endl;
  return 0;
}