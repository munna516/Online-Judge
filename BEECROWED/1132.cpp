/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/100   ***/

#include <iostream>
using namespace std;
int main()
{
  int a, b, sum = 0;
  cin >> a >> b;
  for (int i = min(a,b); i <= max(a,b); i++)
  {
    if (i % 13 != 0)
    {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}