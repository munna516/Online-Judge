/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1547   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, num, x = 101, y, pos;
        cin >> s >> num;
        int ary[s];
        for (int i = 0; i < s; i++)
        {
            cin >> ary[i];
        }

        for (int i = 0; i < s; i++)
        {
            if(num==ary[i])
              {
                pos = i + 1;
                break;
              }
            else 
            {
                y = abs(num - ary[i]);
                if (y < x)
                {
                    x = y;
                    pos = i + 1;
                }
            }    
        }
        cout << pos << endl;
    }

    return 0;
}