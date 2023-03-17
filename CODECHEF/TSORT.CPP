#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> ary(n);
  for (int i = 0; i < n; i++)
  {
    cin >> ary[i];
  }

  sort(ary.begin(), ary.end());

  for (int i = 0; i < n; i++)
  {
    cout << ary[i] << endl;
  }

  return 0;
}