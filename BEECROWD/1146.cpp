/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1146   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  for (;;)
  {
    cin >> a;
    if (a == 0)
      break;
    else
    {
      for (int i = 1; i < a; i++)
      {
        cout << i << " ";
      }
      cout<<a<<endl;
    }
  }

  return 0;
}