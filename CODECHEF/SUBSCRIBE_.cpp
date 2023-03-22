#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int x, y;
    std::cin >> x >> y;
    if (x % 6 == 0)
      std::cout << (x / 6) * y << std::endl;
    else
      std::cout << ((x / 6) + 1) * y << std::endl;
  }

  return 0;
}