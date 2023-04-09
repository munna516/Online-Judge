#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if (sum == 180)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
