#include <iostream>
using namespace std;
int main()
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int x;
    std::cin >> x;
    if (x <= 15)
      std::cout << "Yes" << std::endl;
    else
      std::cout << "No" << std::endl;
  }
  return 0;
}