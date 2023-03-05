/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1094   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, c = 0, r = 0, s = 0, total = 0;
  cin >> t;
  while (t--)
  {
    int a;
    char ch;
    cin >> a >> ch;
    total += a;
    if (ch == 'C')
      c += a;
    else if (ch == 'R')
      r += a;
    else if (ch == 'S')
      s += a;
  }

  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << c << endl;
  cout << "Total de ratos: " << r << endl;
  cout << "Total de sapos: " << s << endl;
  cout << fixed << setprecision(2);
  cout << "Percentual de coelhos: " << (c * 100.0) / total << " %" << endl;
  cout << "Percentual de ratos: " << (r * 100.0) / total << " %" << endl;
  cout << "Percentual de sapos: " << (s * 100.0) / total << " %" << endl;

  return 0;
}