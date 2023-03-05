#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll a, b;
    cin >> a >> b;
    ll ans = ceil(abs(a - b) / (10 * 1.0));
    cout << ans << endl;
  }

  return 0;
}
