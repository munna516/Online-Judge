#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int a;
    std::cin >> a;
    if (a >= 10)
    {
      int x = a % 10;
      std::cout << x / 1 << std::endl;
    }
    else
    {
      std::cout << a / 1 << std::endl;
    }
  }

  return 0;
}