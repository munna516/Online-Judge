#include <iostream>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    if (21 - sum <= 10)
    {
      cout << 21 - sum << endl;
    }
    else
    {
      cout << "-1" << endl;
    }
  }

  return 0;
}