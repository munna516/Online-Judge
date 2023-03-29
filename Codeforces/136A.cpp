#include <iostream>
using namespace std;
int main()
{
  int n;
  std::cin >> n;
  int ary[n];
  int to_gift[n];
  for (int i = 1; i <= n; i++)
  {
    std::cin >> ary[i];
    to_gift[ary[i]] = i;
  }
  for (int i = 1; i <= n; i++)
  {
    std::cout << to_gift[i] << " ";
  }

  return 0;
}

//   2  3  4  1   input
//   1  2  3  4  index
//   4  1  2  3   output