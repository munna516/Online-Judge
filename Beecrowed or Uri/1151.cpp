/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1151   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin >> x;
  int array[x];
  array[0] = 0;
  array[1] = 1;
  for (int i = 2; i <= x; i++)
  {
    array[i] = array[i - 1] + array[i - 2];
  }
  for (int i = 0; i < x-1; i++)
  {
    cout << array[i] << " ";
  }
  cout<<array[x-1]<<endl;
  return 0;
}