#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    int m = (y - 1) / x;

    cout << m << endl;
  }

  return 0;
}
