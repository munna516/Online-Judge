#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int x, y;
    std::cin >> x >> y;
    std::cout << max(x, y) << std::endl;
  }

  return 0;
}
