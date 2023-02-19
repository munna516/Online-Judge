#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int32_t main(void)
{
  int i, j, t, x, y, w, h, n, sum, product, count;
  string s;
  cin >> t;
  while (t--)
  {
    cin >> w >> h >> n;
    count = 1;
    while (w % 2 == 0)
    {
      w /= 2;
      count *= 2;
    }
    while (h % 2 == 0)
    {
      h /= 2;
      count *= 2;
    }
    if (count >= n)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}