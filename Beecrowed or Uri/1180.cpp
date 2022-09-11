/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1180   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, p;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  int min = array[0];
  for (int i = 1; i < n; i++)
  {
    if (array[i] < min)
    {
      min = array[i];
      p = i;
    }
  }
  cout << "Menor valor: " << min << endl;
  cout << "Posicao: " << p << endl;
  
  return 0;
}