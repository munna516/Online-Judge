#include <iostream>
using namespace std;
int main()
{
  int i, t = 0, a[26] = {0};
  
  string s;
  getline(cin, s);

  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
      a[s[i] - 97] = 1;
  }
  for (i = 0; i < 26; i++)
  {
    t += a[i];
  }
  cout << t;

  return 0;
}

