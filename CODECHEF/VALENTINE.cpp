#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    if (x < y)
      cout << "0" << endl;
    else
      cout << x / y << endl;
  }

  return 0;
}