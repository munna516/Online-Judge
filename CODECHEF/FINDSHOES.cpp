#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    cout << n + max(0, n - m) << "\n";
  }
  return 0;
}
