/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1101   ***/

#include <iostream>
using namespace std;
int main()
{
  int a, b;
  for (;;)
  {
    int sum = 0;
    cin >> a >> b;
    if (a > 0 & b > 0)
    {
      for (int i = min(a, b); i <= max(a, b); i++)
      {
        cout << i << " ";
        sum += i;
      }
      cout << "Sum=" << sum << endl;
    }
    else
      break;
  }

  return 0;
}