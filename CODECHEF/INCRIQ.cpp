#include <iostream>
using namespace std;
int main()
{
  int x;
  std::cin >> x;
  if (x + 7 > 170)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
  return 0;
}