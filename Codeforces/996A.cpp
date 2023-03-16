// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   long long a, sum = 0, rem;
//   cin >> a;
//   rem = a / 100;
//   sum = sum + rem;
//   a = a % 100;

//   rem = a / 20;
//   sum = sum + rem;
//   a = a % 20;

//   rem = a / 10;
//   sum = sum + rem;
//   a = a % 10;

//   rem = a / 5;
//   sum = sum + rem;
//   a = a % 5;

//   rem = a / 1;
//   sum = sum + rem;
//   a = a % 1;
//   cout << sum << endl;
//   return 0;
// }



//**     Another solution   **//

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int  num;
  cin >> num;
  int ary[5] = {100, 20, 10, 5, 1}, ans = 0;
  for (int i = 0; i < 5; i++)
  {
    ans += num / ary[i];
    num %= ary[i];
  }
  cout << ans << endl;

  return 0;
}