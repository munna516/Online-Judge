#include <iostream>
using namespace std;
int main()
{
  int matrix[999];
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      std::cin >> matrix[i];
      if (matrix[i] == 1)
      {
        cout << abs(i - 3) + abs(j - 3);
      }
    }
  }

  return 0;
}