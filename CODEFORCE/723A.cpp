#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int x, y, z;
  x = abs(a - b) + abs(a - c);
  y = abs(b - a) + abs(b - c);
  z = abs(c - b) + abs(c - a);

  cout<<min(min(x,y),min(x,z))<<endl;

  return 0;
}
