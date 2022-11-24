/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2760   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s1, s2, s3;
  getline(cin, s1);
  getline(cin, s2);
  getline(cin, s3);

  cout << s1 << s2 << s3 << endl;
  cout << s2 << s3 << s1 << endl;
  cout << s3 << s1 << s2 << endl;
  int i = 0;
  while (s1[i] != '\0' && i < 10)
  {
    cout << s1[i];
    ++i;
  }
  i = 0;
  while (s2[i] != '\0' && i < 10)
  {
    cout << s2[i];
    ++i;
  }
  i = 0;
  while (s3[i] != '\0' && i < 10)
  {
    cout << s3[i];
    ++i;
  }
  cout << endl;
  return 0;
}