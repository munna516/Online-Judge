#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c)
      cout << "Draw" << endl;
    else if (b < c)
      cout << "Bob" << endl;
    else if (c < b)
      cout << "Alice" << endl;
  }
  
  return 0;
}