#include<iostream>
#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
  string s , s1;
    cin >> s;
    sort(s.begin() , s.end());
    for(int i = 0 ; i < s.size() ; i++)
    {
     if(s[i] != '+'){
         s1 += s[i];
     }
    }
    int k = s1.size();
    for(int i = 0 ; i < s1.size() - 1 ; i++)
    {
         cout << s1[i] << "+";
    }
    cout << s1[k - 1];

 return 0;
}