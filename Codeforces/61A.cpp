#include <iostream>
using namespace std;
int main()
{
  std::string s1, s2;
  std::cin >> s1 >> s2;
  for (int i = 0; i < s1.length(); i++)
  {
    if (s1[i] != s2[i])
    {
      std::cout << '1';
    }
    else
    {
      std::cout << '0';
    }
  }

  return 0;
}
