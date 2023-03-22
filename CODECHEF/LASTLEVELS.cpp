#include <iostream>
using namespace std;
int main()
{
  int t, gap;
  std::cin >> t;
  while (t--)
  {
    int x, y, z;
    std::cin >> x >> y >> z;
    if (x % 3 == 0)
    {
      gap = (x / 3) - 1;
    }
    else
    {
      gap = (x / 3);
    }

    int min = (x * y) + (gap * z);
    std::cout << min << std::endl;
  }

  return 0;
}
