#include <iostream>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a - c == b - d)
      cout << "Any" << endl;
    else if (a - c < b - d)
      cout << "First" << endl;
    else
      cout << "Second" << endl;
  }

  return 0;
}
