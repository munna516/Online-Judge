#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int x, y, z;
    std::cin >> x >> y >> z;
    if (x > z)
      std::cout << "0" << std::endl;
    else if ((x + y) <= z)
      std::cout << "2" << std::endl;
    else
      std::cout << "1" << std::endl;
  }

  return 0;
}