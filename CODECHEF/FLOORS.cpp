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
    int c = abs((x - 1) / 10 - (y - 1) / 10);
    cout << c << endl;
  }
  return 0;
}