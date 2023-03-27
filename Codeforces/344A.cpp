#include <iostream>
using namespace std;
int main()
{
  int n, count = 0;
  std::cin >> n;
  int magnet[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> magnet[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (magnet[i] != magnet[i + 1])
    {
      count++;
    }
  }

  std::cout << count << std::endl;
  return 0;
}