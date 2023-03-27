#include <iostream>
using namespace std;

int main()
{
  int n, count = 0;
  std::cin >> n;
  int num[n];
  while (n != 0)
  {
    for (int i = 0; i < 3; i++)
    {
      std::cin >> num[i];
      std::cout << " ";
    }
    if (num[0] == 1 && num[1] == 1 && num[2] == 1)
    {
      count++;
    }
    else if (num[0] == 1 && num[1] == 1)
    {
      count++;
    }
    else if (num[0] == 1 && num[2] == 1)
    {
      count++;
    }
    else if (num[1] == 1 && num[2] == 1)
    {
      count++;
    }
    else
      count == 0;

    n--;
  }

  std::cout << count << endl;
  return 0;
}