#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int s, x, y, z;
    cin >> s >> x >> y >> z;
    int sum = x + y + z;
    if (s >= (x + y + z))
      cout << "0" << endl;
    else if (sum - x <= s || sum - y <= s)
      cout << "1" << endl;
    else
      cout << "2" << endl;
  }

  return 0;
}