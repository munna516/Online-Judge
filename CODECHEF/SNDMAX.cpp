#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b && a < c)
      std::cout << a << std::endl;
    else if (a > c && a < b)
      std::cout << a << std::endl;
    else if (b > a && b < c)
      std::cout << b << std::endl;
    else if (b > c && b < a)
      std::cout << b << std::endl;
    else if (c > a && c < b)
      std::cout << c << std::endl;
    else if (c > b && c < a)
      std::cout << c << std::endl;
  }

  return 0;
}