#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int w, x, z, y;
    std::cin >> w >> x >> y >> z;
    if ((z * y) + w > x)
      std::cout << "overFlow" << std::endl;
    else if ((z * y) + w == x)
      std::cout << "filled" << std::endl;
    else
      std::cout << "Unfilled" << std::endl;
  }

  return 0;
}