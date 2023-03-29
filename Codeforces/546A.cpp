#include <iostream>
using namespace std;
int main()
{
  int k, n, w;
  int sum = 0;
  std::cin >> k >> n >> w;
  for (int i = 1; i <= w; i++)
  {
    sum = sum + (k * i);
  }

  if (n > sum)
  {
    std::cout << "0" << std::endl;
  }
  else
  {
    int sub = sum - n;
    std::cout << sub << std::endl;
  }

  return 0;
}