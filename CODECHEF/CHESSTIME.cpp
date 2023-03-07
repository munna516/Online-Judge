#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int n;
    std::cin >> n;
    int time = (n * 60) / 20;
    std::cout << time << std::endl;
  }

  return 0;
}
