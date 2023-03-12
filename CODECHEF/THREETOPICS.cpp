#include <iostream>
using namespace std;
int main()
{
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  if (a == x || b == x || c == x)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}