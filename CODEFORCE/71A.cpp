#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  int number;
  char str[100];
  std::cin>>number;
  
  while( number--)
    {
       gets(str);
       int len=strlen(str);
       
       if(len<=10)
          {
               std::cout<<str<<std::endl;
          }
        else
        {
           std::cout<<str[0]<<len-2<<str[len-1]<<std::endl;   
        }  
    }
}