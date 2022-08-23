#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      int pa, pb, qa, qb;
      cin >> pa >> pb >> qa >> qb;
      int x = max(pa, pb), y = max(qa, qb);
      if (x < y)
        cout << 'P' << '\n';
      else if (y < x)
        cout << 'Q' << '\n';
      else
        cout << "TIE\n";
     
    }
 return 0;   
}
    