#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int n;
  std::cin >> n;
  int ary[n];

  for (int i = 0; i < n; i++)
  {
    std::cin >> ary[i];
  }

  sort(ary, ary + n);

  for (int i = 0; i < n; ++i)
  {
    std::cout << ary[i] << " ";
  }
  cout << "\n";

  return 0;
}
