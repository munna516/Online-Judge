#include <iostream>
using namespace std;
int main()
{
  int t, x1, y1, x2, y2;
  int sum1 = 0, sum2 = 0;
  std::cin >> t;
  while (t--)
  {
    std::cin >> x1 >> y1 >> x2 >> y2;
    sum1 = x1 + y1;
    sum2 = x2 + y2;
    if (sum1 < sum2)
    {
      std::cout << sum1 << std::endl;
    }
    else
    {
      std::cout << sum2 << std::endl;
    }
  }

  return 0;
}
