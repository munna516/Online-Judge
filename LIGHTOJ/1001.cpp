#include <bits/stdc++.h>
using namespace std;
#define ISO                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define ll long long
#define pi 3.1416
#define endl "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
/*----------------------------------*/

void solve()
{
  int n;
  cin >> n;
  if (n > 10)
    cout << "10"
         << " " << n - 10 << endl;
  else
    cout << "0"
         << " " << n << endl;
}
int main()
{
  ISO;
  ll _;
  cin >> _;
  while (_--)
  {
    solve();
  }
  return 0;
}
