#include <iostream>
using namespace std;
int main()
{
  int t;
  std::cin >> t;
  ;
  while (t--)
  {
    int n;
    std::cin >> n;
    int rem = n % 10;
    while (n > 9)
    {
      n = n / 10;
    }
    std::cout << n + rem << std::endl;
  }

  return 0;
}