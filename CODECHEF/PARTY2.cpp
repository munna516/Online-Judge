#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int n, x, k;
    std::cin >> n >> x >> k;

    if (k >= n * x)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }

  return 0;
}
