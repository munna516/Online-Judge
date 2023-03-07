#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int x, y;
    std::cin >> x >> y;
    std::cout << std::min(x, y) << std::endl;
  }

  return 0;
}
