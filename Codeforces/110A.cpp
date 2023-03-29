#include <iostream>
using namespace std;
int main()
{
  std::string s;
  std::cin >> s;
  int lucky = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '4' || s[i] == '7')
      lucky++;
  }

  if (lucky == 4 || lucky == 7)
  {
    std::cout << "YES" << std::endl;
  }
  else
    std::cout << "NO" << std::endl;

  return 0;
}