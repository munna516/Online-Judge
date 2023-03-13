#include <iostream>
using namespace std;
int main()
{
  int n, x, count = 0;
  std::cin >> n >> x;
  for (int i = 1; i <= n; i++)
  {
    int a;
    std::cin >> a;
    if (a % x == 0)
      count++;
  }

  std::cout << count << std::endl;
  return 0;
}