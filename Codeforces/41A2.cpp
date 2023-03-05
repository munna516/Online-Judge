#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int i=0,n;
  std::string s,s1;
  std::cin>>s>>s1;
  char s2[s1.length()];
  n=s1.length()-1;
  while(i<=n)
    {
      swap(s1[i],s1[n]);
      n=n-1;
      i=i+1;
    }
  
 if(s==s1)
   {
    std::cout<<"YES"<<std::endl;
   }
 else
   {
    std::cout<<"NO"<<std::endl;
   }

 return 0;  
}
