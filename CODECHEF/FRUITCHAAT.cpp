#include <iostream>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int x, y, count = 0;
    cin >> x >> y;
    while (x / 2 != 0 && y != 0)
    {
      count++;
      x = x - 2;
      y = y - 1;
    }
    cout << count << endl;
  }

  return 0;
}
