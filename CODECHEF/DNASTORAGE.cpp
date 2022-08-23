#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    char s;
    char arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i += 2)
    {
      int j = i + 1;
      if (arr[i] == '0' && arr[j] == '0')
        s = 'A';
      else if (arr[i] == '0' && arr[j] == '1')
        s = 'T';
      else if (arr[i] == '1' && arr[j] == '0')
        s = 'C';
      else if (arr[i] == '1' && arr[j] == '1')
        s = 'G';
      cout << s;
    }
    cout << endl;
  }
  return 0;
}