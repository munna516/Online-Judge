#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int toast_make = (k * l) / nl;
  int total_limes = c * d;
  int salts = p / np;
  int x = min(min(toast_make, total_limes), min(total_limes, salts)) / n;
  cout << x << endl;

  return 0;
}
