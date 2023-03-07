#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int x;
    std::cin >> x;
    if (x * 0.10 > 100)
      std::cout << x * 0.10 << std::endl;
    else
      std::cout << "100" << std::endl;
  }

  return 0;
}