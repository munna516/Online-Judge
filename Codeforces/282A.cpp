#include<iostream>
using namespace std;
int main()
{
 int num,count=0,i;
 std::cin>>num;
 std::string  bit;
 for(i=0;i<=num;i++)
    {
      getline(std::cin,bit);

      if(bit=="++X")
        {
           ++count;
        }
      else if(bit=="X++")
        {
           count++;
        }  
      else if(bit=="--X")
        {
           --count;
        }
      else if(bit=="X--")
        {
           count--;
        }     
    }
 std::cout<<count<<endl; 
  return 0;
}