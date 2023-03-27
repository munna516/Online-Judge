#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long long int n, count = 1, temp = 1;
  std::cin >> n;
  long long int ary[100010];
  for (int i = 0; i < n; i++)
  {
    std::cin >> ary[i];
  }
  for (int i = 1; i < n; i++)
  {
    if (ary[i] >= ary[i - 1])
    {
      count++;
    }
    else
    {
      count = 1;
    }
    temp = max(temp, count);
  }

  std::cout << temp << std::endl;

  return 0;
}