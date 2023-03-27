#include <iostream>
using namespace std;
int main()
{
  int n, p, q, count = 0;
  std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    std::cin >> p >> q;
    if (p + 1 < q)
    {
      count++;
    }
  }
  std::cout << count << std::endl;
  return 0;
}