#include<iostream>
using namespace std;
int main()
{
 int n,count=0,max=0;
 std::cin>>n;
 int ary[n];
 for(int i=0;i<n;i++)
   {
    std::cin>>ary[i];
    if(ary[i]==1)
       {
         count++;
       }
     else 
       {
        max++;
       }       
   }
  if(count>0)
     {
      std::cout<<"HARD"<<std::endl;
     } 
  else
     {
      std::cout<<"Easy"<<std::endl;
     }
     
 return 0;  
}

