/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1985   ***/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int p;
  float sum = 0;
  cin >> p;
  while (p--)
  {
    float a, b;
    cin >> a >> b;
    if (a == 1001)
      sum = sum + (1.50 * b);
    else if (a == 1002)
      sum = sum + (2.50 * b);
    else if (a == 1003)
      sum = sum + (3.50 * b);
    else if (a == 1004)
      sum = sum + (4.50 * b);
    else if (a == 1005)
      sum = sum + (5.50 * b);
  }
  cout << fixed << setprecision(2);
  cout << sum << endl;
  return 0;
}