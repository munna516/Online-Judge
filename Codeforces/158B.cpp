#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pai 3.14159
const int N = 1e9 + 7;
#define endl "\n"
#define vi vector<int>
#define pi pair<int, int>
/****************************************/
void solve()
{
  int n, one = 0, two = 0, three = 0, four = 0;
  cin >> n;
  vi v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if (v[i] == 4)
      four++;
    else if (v[i] == 3)
      three++;
    else if (v[i] == 2)
      two++;
    else if (v[i] == 1)
      one++;
  }
  int count = 0;
  count += four; // 2
                 // 2+2    3 3 3   1 1 1 1 1
  if (three > one)
  {
    count += (min(one, three));
    three = three - one;
    one = 0;
  }
  if (three < one)
  {
    count += (min(one, three));
    one = one - three;
    three = 0;
  }
  if (three == one)
  {
    count += (min(one, three));
    one = 0;
    three = 0;
  }
  if (two * 2 % 4 == 0)
  {
    count += (two / 2);
    two = 0;
  }
  if (two * 2 % 4 != 0)
  {
    count += (two - 1) / 2;
    two = 1;
  }
  if (two * 2 >= one)
  {

    if (one % 2 == 0)
    {
      count += (one / 2);
      two = two - (one / 2);
      one = 0;
    }
    else
    {
      count += (one / 2);
      two = two - ((one - 1) / 2);
      one = 1;
    }
  }
  if (two * 2 < one)
  {
    count += two;
    one = one - (two * 2);
  }

  count += two + one + three;
  cout << count << endl;
}

/****************************************/
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // ll _;
  // cin >> _;
  // while (_--)
  // {
  solve();
  // }
  return 0;
}
