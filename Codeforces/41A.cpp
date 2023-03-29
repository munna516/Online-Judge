#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int i, j;
  std::string s, s1;
  std::cin >> s >> s1;
  reverse(s1.begin(), s1.end());

  if (s == s1)
  {
    std::cout << "YES" << std::endl;
  }
  else
  {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
