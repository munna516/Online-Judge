#include <iostream>
using namespace std;
int main()
{
  int test, x, y;
  std::cin >> test;
  while (test--)
  {
    std::cin >> x >> y;
    if (x > y)
      cout << x - y << endl;
    else if (x < y)
      cout << y - x << endl;
    else
      cout << "0" << std::endl;
  }

  return 0;
}
