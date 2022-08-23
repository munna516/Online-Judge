#include<iostream>
using namespace std;
int main()
{
  int n;
  std::cin>>n;
  for(int i=1;i<n;i++)
    {
      if(i%2==0)
        {
          std::cout<<"I love that ";
        }
      else 
        {
          std::cout<<"I hate that ";
        }
     // std::cout<<"that ";  
    }
  if(n%2==0)
    {
      std::cout<<"I love it"<<std::endl;
    }
  else
    {
      std::cout<<"I hate it"<<std::endl;
    }  
 
 return 0;  
}
