#include <iostream>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int w, x, z, y;
    cin >> w >> x >> y >> z;
    if ((z * y) + w > x)
      cout << "overFlow" << endl;
    else if ((z * y) + w == x)
      cout << "filled" << endl;
    else
      cout << "Unfilled" << endl;
  }

  return 0;
}