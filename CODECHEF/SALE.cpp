#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    int x = min(min(a, b), min(b, c));
    cout << (a + b + c) - x << endl;
  }

  return 0;
}