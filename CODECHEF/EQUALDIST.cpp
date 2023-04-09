#include <iostream>
using namespace std;
int main()
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int x, y;
    std::cin >> x >> y;
    if ((x + y) % 2 == 0)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }

  return 0;
}
