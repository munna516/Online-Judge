#include <iostream>
using namespace std;
bool isprime(int n)
{
  if (n == 1)
    return false;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int num, count = 0;
    cin >> num;
    if (isprime(num))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

  return 0;
}