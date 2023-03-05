#include<iostream>
using namespace std;
int main()
{
  int n,k,count=0;
  std::cin>>n; std::cout<<" "; std::cin>>k;
  int a[n];
  for(int i=0;i<n;i++)
    {
      std::cin>>a[i];
      std::cout<<" ";
    }
  for(int i=0;i<n;i++) 
     {
        if (a[i]>a[k-1] && a[i]>0)
            count++;
        if (a[i]==a[k-1] && a[i]>0)
          count+=1;
  
     } 
   
  std::cout<<count<<endl;

  return 0;
}