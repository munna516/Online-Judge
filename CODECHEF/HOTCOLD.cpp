#include <iostream>
using namespace std;
int main()
{
  int test, c;
  std::cin >> test;
  while (test--)
  {
    std::cin >> c;
    if (c > 20)
    {
      std::cout << "HOT" << std::endl;
      ;
    }
    else
    {
      std::cout << "COLD" << std::endl;
    }
  }

  return 0;
}