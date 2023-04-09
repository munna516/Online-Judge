#include <iostream>
using namespace std;
int main()
{
  long long int t;
  std::cin >> t;
  while (t--)
  {
    int m, r, sum = 0;
    std::cin >> m;
    while (m != 0)
    {
      r = m % 10;
      sum = sum + r;
      m = m / 10;
    }
    std::cout << sum << std::endl;
  }

  return 0;
}