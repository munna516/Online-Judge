/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2863   ***/

#include <iostream>

using namespace std;

int main()
{

  int t;
  float v, min;

  while (cin >> t)
  {
    min = 11;

    while (t--)
    {
      cin >> v;
      if (v < min)
        min = v;
    }

    cout << min << endl;
  }

  return 0;
}