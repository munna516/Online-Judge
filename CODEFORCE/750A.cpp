
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, x, time = 0, i, count = 0;
  cin >> n >> k;
  x = 240 - k;
  for (int i = 1; i <= n; i++)
  {
    time = time + (5 * i);
    if (time <= x)
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
