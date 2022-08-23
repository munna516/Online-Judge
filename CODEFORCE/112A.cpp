#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  std::string s1;
  std::string s2;
  std::cin>>s1>>s2;

  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);     // STL
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

  if(s1==s2)
    {
      std::cout<<"0"<<std::endl;
    }
  else if(s1<s2)
     {
       std::cout<<"-1"<<std::endl;
     } 
  else  
     {
      std::cout<<"1"<<std::endl;
     } 
 return 0;       
}