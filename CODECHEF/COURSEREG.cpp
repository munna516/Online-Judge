#include <iostream>
using namespace std;
int main()
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n, m, k;
    std::cin >> n >> m >> k;
    if (k + n <= m)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }
  return 0;
}