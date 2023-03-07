#include <iostream>
using namespace std;
int main()
{
  int t, even = 0, odd = 0;
  std::cin >> t;
  while (t--)
  {
    int x;
    std::cin >> x;
    if (x % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }
  }
  if (even > odd)
    std::cout << "READY FOR BATTLE" << std::endl;
  else
    std::cout << "NOT READY" << std::endl;

  return 0;
}