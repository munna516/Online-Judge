#include <iostream>
using namespace std;
int main()
{
  int x, a, b;
  std::cin >> x;
  std::cin >> a >> b;
  if (x >= a + b)
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;

  return 0;
}