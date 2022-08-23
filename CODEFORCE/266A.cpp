#include<iostream>
using namespace std;
int main()
{
  int n,count=0;
  std::cin>>n;
  std::string s;
  std::cin>>s;
  for(int i=0;i<n;i++)
    {
      if(s[i]==s[i+1])
        {
          count++;
        }
    }
  std::cout<<count<<endl;
 return 0;    
}