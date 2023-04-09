#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    double a, b;
    std::cin >> a >> b;

    if ((a * 1.07) >= b)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }

  return 0;
}