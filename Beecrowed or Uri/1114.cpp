/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1114   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  for (;;)
  {
    cin>>x;
    if (x == 2002)
    {
      cout << "Acesso Permitido" << endl;
      break;
    }
    else
    {
      cout << "Senha Invalida" << endl;
    }
  }

  return 0;
}