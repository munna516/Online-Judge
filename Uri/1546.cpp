/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1546   ***/

#include <iostream>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int k, a;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
      cin >> a;
      if (a == 1)
        cout << "Rolien" << endl;
      else if (a == 2)
        cout << "Naej" << endl;
      else if (a == 3)
        cout << "Elehcim" << endl;
      else if (a == 4)
        cout << "Odranoel" << endl;
    }
  }

  return 0;
}