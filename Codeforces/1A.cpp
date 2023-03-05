#include <bits/stdc++.h> 
using namespace std;    
#define ll     long long
int main()
{
	ll m,n,a,num1,num2;
	cin>>n>>m>>a;
	num1=m/a;num2=n/a;
	if (m%a!=0) num1 =(m/a+1);
  if (n%a!=0) num2 =(n/a+1);	
	cout<<num1*num2;
	return 0;
}