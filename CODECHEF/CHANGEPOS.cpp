#include <iostream>
using namespace std;
int main()
{
  int test;
  std::cin >> test;
  while (test--)
  {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a == c || b == d)
    {
      cout << "2" << endl;
    }
    else
    {
      cout << "1" << endl;
    }
  }

  return 0;
}
