#include<iostream>
using namespace std;
int main()
{
 int t;
 std::cin>>t;
 while(t--)
    {
      int count=0;
      std::string s;
      std::cin>>s;
      for(int i=0;i<s.length();i++)
         {
          if(s[i]=='4')
            count++;
         }
      std::cout<<count<<std::endl;   
    }

 return 0;  
}