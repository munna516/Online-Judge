#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x1, x2, x3, x4, a;
  cin >> x1 >> x2 >> x3 >> x4;

  if (x1 > x2 && x1 > x2 && x1 > x4)
  {
    cout << x1 - x2 << " " << x1 - x3 << " " << x1 - x4 << endl;
  }
  else if (x2 > x1 && x2 > x3 && x2 > x4)
  {
    cout << x2 - x1 << " " << x2 - x3 << " " << x2 - x4 << endl;
  }
  else if (x3 > x1 && x3 > x2 && x3 > x4)
  {
    cout << x3 - x1 << " " << x3 - x2 << " " << x3 - x4 << endl;
  }
  else if (x4 > x1 && x4 > x2 && x4 > x3)
  {
    cout << x4 - x1 << " " << x4 - x2 << " " << x4 - x3 << endl;
  }

  return 0;
}
