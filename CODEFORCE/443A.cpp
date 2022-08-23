#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int count=0;
 sort(s.begin(),s.end());
 for(int i=0;i<s.length()-1;i++)
   {
    if(s[i]>=92 && s[i]<=122)
       {
        count++;
        if(s[i]==s[i+1])
          count--;
       }  
    
   }

 cout<<count<<endl;


 return 0;  
} 