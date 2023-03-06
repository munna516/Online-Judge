#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int x, y, m;
    std::cin >> x >> y >> m;
    if (x * m < y)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }

  return 0;
}
