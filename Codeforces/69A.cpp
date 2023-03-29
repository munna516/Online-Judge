#include <iostream>
using namespace std;
int main()
{
  int n;
  int sum1 = 0, sum2 = 0, sum3 = 0;
  std::cin >> n;
  int ary[n * 3];
  for (int i = 0; i < n * 3; i++)
  {
    std::cin >> ary[i];
  }

  for (int i = 0; i < n * 3; i += 3)
  {
    sum1 = sum1 + ary[i];
  }
  for (int i = 1; i < n * 3; i += 3)
  {
    sum2 = sum2 + ary[i];
  }
  for (int i = 2; i < n * 3; i += 3)
  {
    sum3 = sum3 + ary[i];
  }

  if (sum1 == 0 && sum2 == 0 && sum3 == 0)
  {
    std::cout << "YES" << std::endl;
  }
  else
  {
    std::cout << "NO" << std::endl;
  }
  return 0;
}

// Another solution of the problem 69A
/*

#include<iostream>
using namespace std;
int main()
{

 int n,sum1=0,sum2=0,sum3=0;
 std::cin>>n;
 while(n--)
   {
    int a,b,c;
    std::cin>>a>>b>>c;
    sum1+=a;
    sum2+=b;
    sum3+=c;
   }

 if(sum1== 0 && sum2==0 && sum3==0)
   {
    std::cout<<"YES"<<std::endl;
   }
 else
    {
      std::cout<<"NO"<<std::endl;
    }
return 0;
}

*/