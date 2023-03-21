#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int x = a / 0.1;
    int y = b / 0.2;
    if (x == y)
      cout << "ANY" << endl;
    else if (x > y)
      cout << "FIRST" << endl;
    else
      cout << "SECOND" << endl;
  }
  return 0;
}