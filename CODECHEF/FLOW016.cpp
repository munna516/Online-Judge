#include <iostream>
using namespace std;

int main()
{
  long long int t, num1, num2, temp, n1, n2;
  cin >> t;
  while (t--)
  {
    cin >> num1 >> num2;
    n1 = num1;
    n2 = num2;
    while (n2 != 0)
    {
      temp = n1 % n2;
      n1 = n2;
      n2 = temp;
    }
    cout << n1 << " " << (num1 * num2) / n1 << endl;
  }
  return 0;
}