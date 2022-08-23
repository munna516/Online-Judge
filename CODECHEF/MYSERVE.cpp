#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    int a,b;cin >> a >> b;
		int x=(a+b)%4/2;
		if(x==0) cout << "Alice\n";
		else cout << "Bob\n";
   }

 return 0; 
}
