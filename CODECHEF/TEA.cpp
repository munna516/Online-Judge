#include<iostream>
using namespace std;
int main()
{
 int test;
 cin>>test;
 while(test--)
  {
   int x,y,z;
	 cin>>x>>y>>z;
	 if(z % x == 0 && z % y != 0)
	    cout <<"CHICKEN"<<endl;
	else if(z % x != 0 && z%y == 0)
	    cout <<"DUCK"<<endl;
	else if(z % x == 0 && z % y == 0)
	    cout <<"ANY"<<endl;
	else if(z % x != 0 && z % y != 0)
	    cout <<"NONE"<<endl;
  }

 return 0; 
}
