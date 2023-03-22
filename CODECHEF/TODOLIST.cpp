#include <iostream>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int n, a, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
      cin >> a;
      if (a >= 1000)
        count++;
    }
    cout << count << endl;
  }

  return 0;
}
