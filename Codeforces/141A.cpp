#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3;
  sort(s3.begin(), s3.end());
  int n = s1.length() + s2.length();
  int i, j;
  s4 = s1 + s2;
  sort(s4.begin(), s4.end());
  if (s3 == s4)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
