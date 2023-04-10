#include <iostream>
using namespace std;
int main()
{
  int n, t, i;
  std::cin >> n >> t;
  std::string s;
  std::cin >> s;
  while (t--)
  {
    for (i = 1; i < n; i++)
    {
      if (s[i - 1] == 'B' && s[i] == 'G')
      {
        s[i - 1] = 'G';
        s[i] = 'B';
        i++;
      }
    }
  }

  std::cout << s << std::endl;
  return 0;
}