#include<iostream>
using namespace std;
int main()
{
 int n,k;
 std::cin>>n>>k;
 for(int i=1;i<=k;i++)
    {
      if(n%10==0)
        {
          n=n/10;
        }
      else
      {
        n--;
      }

    }

 std::cout<<n<<std::endl;
 return 0;  
}