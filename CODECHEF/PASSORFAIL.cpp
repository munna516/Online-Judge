#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, p;
    cin >> n >> x >> p;
    int inc = n - x;
    int mark = (x * 3) + (inc * (-1));
    if (mark >= p)
      cout << "PASS" << endl;
    else
      cout << "FAIL" << endl;
  }
  return 0;
}