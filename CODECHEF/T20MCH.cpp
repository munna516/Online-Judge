#include <iostream>
using namespace std;
int main()
{
  int r, o, c;
  cin >> r >> o >> c;
  int x = ((20 - o) * 6) * 6;
  if ((x + c) > r)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}