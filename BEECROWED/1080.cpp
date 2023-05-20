/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1080   ***/

#include <iostream>
using namespace std;
int main()
{
  int ary[100], max = 0, position;
  for (int i = 0; i < 100; i++)
  {
    cin >> ary[i];
  }
  for (int i = 0; i < 100; i++)
  {
    if (ary[i] > max)
    {
      max = ary[i];
      position = i + 1;
    }
  }
  cout << max << endl;
  cout << position << endl;
  return 0;
}