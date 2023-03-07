#include <iostream>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
      cout << n % 3 << endl;
    }
    else
    {
      int x = n / 3;
      int y = (x + 1) * 3 - n;
      cout << y << endl;
    }
  }

  return 0;
}
