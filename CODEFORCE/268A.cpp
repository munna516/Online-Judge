#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, count = 0;
  cin >> n;
  int cal_1[n], cal_2[n];
  for (int i = 0; i < n; i++)
  {
    cin >> cal_1[i] >> cal_2[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (cal_1[i] == cal_2[j])
        count++;
    }
  }
 cout<<count<<endl;
  return 0;
}
