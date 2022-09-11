/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1171   ***/

#include <stdio.h>
#include <string.h>
#define N 2001
int main()
{
  int t, n, i, j;
  int arr[N];
  while (scanf("%d", &t) == 1)
  {
    memset(arr, 0, sizeof arr);
    for (i = 1; i <= t; i++)
    {
      scanf("%d", &n);
      arr[n]++;
    }
    for (i = 0; i < N; i++)
      for (j = 0; j < arr[i]; j++)
      {
        if (arr[i] > 0)
          printf("%d aparece %d vez(es)\n", i, arr[i]);
        break;
      }
  }
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define N 2001
// int main()
// {
//   int t, i, j, n;
//   int ary[N];
//   cin >> t;
//   while (1)
//   {
//     memset(ary, 0, sizeof(ary));
//     for (int i = 1; i <= t; i++)
//     {
//       cin >> n;
//       ary[n]++;
//     }

//     for (int i = 0; i < N; i++)
//     {
//       for (int j = 0; j < ary[i]; j++)
//       {
//         if (ary[i] > 0)
//         { cout<<i<<" aparece "<<ary[i]<<" vez(es)"<<endl;
//               break;
//         }
//       }
//     }
//   }
//  return 0;  
// }
