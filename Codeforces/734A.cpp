#include <iostream>
using namespace std;
int main()
{
  int n, Anton = 0, Danik = 0;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'A')
    {
      Anton++;
    }
    else
      Danik++;
  }

  if (Anton > Danik)
  {
    std::cout << "Anton" << std::endl;
  }
  else if (Anton < Danik)
  {
    std::cout << "Danik" << std::endl;
  }
  else
  {
    std::cout << "Friendship" << std::endl;
  }

  return 0;
}