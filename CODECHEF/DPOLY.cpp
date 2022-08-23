#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    int A[n];

    for (int j = 0; j < n; j++)
    {
      cin >> A[j];
    }
    int k;
    for (k = n - 1; k >= 0; k--)
    {
      if (A[k] == 0)
      {
      }
      else
      {
        break;
      }
    }
    cout << k << "\n";
  }
  return 0;
}
