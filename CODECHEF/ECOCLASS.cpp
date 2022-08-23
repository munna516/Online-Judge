#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, count = 0;
    cin>>x;
    int ary1[x];
    int ary2[x];
    for (int i = 0; i < x; i++)
    {
      cin >> ary1[i] ; 
    }
    for (int i = 0; i < x; i++)
    {
      cin >> ary2[i] ; 
    }
   for (int i = 0; i < x; i++)
    {
      if (ary1[i] == ary2[i])
         count++;
    }
   cout<<count<<endl;  
  }

  return 0;
}
