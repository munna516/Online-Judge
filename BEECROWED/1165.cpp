/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1165   ***/

#include <bits/stdc++.h>
using namespace std;
void is_prime(int a)
{
  int count = 0;
  for (int i = 2; i < a; i++)
  {
    if (a % i == 0)
    {
      count++;
      break;
    }
  }
  if (count == 0)
    cout << a << " eh primo" << endl;
  else
    cout << a << " nao eh primo" << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a;
    cin >> a;
    is_prime(a);
  }

  return 0;
}