#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, max, min, count_1 = 0, count_2 = 0;
  cin >> n;
  int ary[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ary[i];
  }
  max = ary[0];
  min = ary[0];
  for (int i = 1; i < n; i++)
  {
    if (ary[i] > max)
    {
      count_1++;
      max = ary[i];
    }
    if (ary[i] < min)
    {
      count_2++;
      min = ary[i];
    }
  }
  cout << count_1 + count_2 << endl;
  return 0;
}
