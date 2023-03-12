#include <iostream>
using namespace std;
int main()
{
  int round, x = 0, y = 0, sub;
  cin >> round;
  for (int i = 1; i <= round; i++)
  {
    int a, b;
    cin >> a >> b;
    x += a;
    y += b;
    if (x > y)
    {
      sub = x - y;
    }
    else
    {
      sub = y - x;
    }
  }

  return 0;
}