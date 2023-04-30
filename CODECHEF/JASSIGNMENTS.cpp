#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    if (10 - x >= 3)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}