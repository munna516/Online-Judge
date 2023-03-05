#include<iostream>
using namespace std;
int main()
{
 int count=0;
 std::string s;
 std::cin>>s;
 for(int i=0;i<s.length();i++)
  {
    if(s[i]==s[i+1])
      {
        count++;
        if(count+1==7)
          {
            std::cout<<"YES"<<std::endl;
            break;
          }
      }
    else
    {
     count=0;
    }
  } 
 if(count==0)
   {
    std::cout<<"NO"<<std::endl;
   }

 return 0;  
}