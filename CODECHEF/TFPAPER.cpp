#include <iostream>
using namespace std;
int main()
{
  int t, n, k;
  std::cin >> t;
  while (t--)
  {
    std::cin >> n >> k;
    int sub = n - k;
    std::cout << sub << std::endl;
  }

  return 0;
}
