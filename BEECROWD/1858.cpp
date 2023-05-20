/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1858   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int small = a[0];
  int index = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] < small)
    {
      small = a[i];
      index = i+1;
    }
  }
  cout << index  << endl;
}