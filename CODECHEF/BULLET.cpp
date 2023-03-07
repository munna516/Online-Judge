#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    if ((y / x) >= z)
    {
      cout << "0" << endl;
    }
    else
    {
      cout << z - (y / x) << endl;
    }
  }

  return 0;
}