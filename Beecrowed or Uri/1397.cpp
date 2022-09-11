/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1397   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x, a, b;
  while (1)
  {
    int player_1 = 0, player_2 = 0;
    cin >> x;
    if (x == 0)
      break;
    else
    {
      for (int i = 1; i <= x; i++)
      {
        
        cin >> a >> b;
        if (a > b)
          player_1++;
        else if (a < b)
          player_2++;
      }

    }
    cout<<player_1<<" "<<player_2<<endl;
  }

  return 0;
}