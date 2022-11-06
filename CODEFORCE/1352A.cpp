/*  Problem Link :::     https://codeforces.com/problemset/problem/1352/A  */
#include <iostream>
using namespace std;
#define ll long long
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int arr[6];
      int ans = 0, m = 1;
      for (int i = 1; i < 6; i++)
      {
         arr[i] = n % 10;
         n = n / 10;
         if (arr[i] != 0)
         {
            ans++;
         }
      }
      cout << ans << "\n";
      for (int i = 1; i < 6; i++)
      {
         if (arr[i] != 0)
         {
            cout << arr[i] * m << " ";
         }
         m = m * 10;
      }
      cout << "\n";
   }
   return 0;
}
   

// #include <iostream>
// using namespace std;
// #define ll long long
// int main()
// {
//    ll n;
//    cin >> n;
//    while (n--)
//    {
//       ll x, ary[4], a = 0, m = 1;
//       cin >> x;
//       if ((x >= 1 && x <= 9) || (x % 10 == 0 || x % 100 == 0 || x % 1000 == 0 || x % 10000 == 0))
//       {
//          cout << 1 << endl;
//          cout << x << endl;
//       }
//       else
//       {
//          int i = 0;
//          while (x != 0)
//          {
//             if (x % 10 == 0)
//             {
//                ary[i] = x;
//                ++i;
//                break;
//             }
//             else
//             {
//                a = x % 10;
//                ary[i] = a;
//                x = x / 10;
//             }
//             ++i;
//          }
//          cout << i << endl;
//          for (int j = 0; j < i; j++)
//          {
//             cout << ary[j] * m << " ";
//             m = m * 10;
//          }
//          cout << endl;
//       }
//    }
//    return 0;
// }
