#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int count = 0;
   std::string s;
   std::cin >> s;
   std::string temp = s;
   transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

   for (int i = 0; i < s.length(); i++)
   {
      if (s[i] == temp[i]) // (s[i]>='a'  && s[i]<='z')
      {
         count++;
      }
   }
   int x = s.length() - count;
   if (x > count)
   {
      transform(s.begin(), s.end(), s.begin(), ::toupper);
      std::cout << s << std::endl;
   }
   else
   {
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      std::cout << s << std::endl;
   }

   return 0;
}