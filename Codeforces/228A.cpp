#include<iostream>
 #include<algorithm>
using namespace std;
int main()
{
 long long int a[4];
    
    int n=sizeof(a)/sizeof(a[0]);
    
    for (int i=0; i<4; i++)
    {
       std::cin >> a[i];
    }
    
   std::sort(a, a+n);
    
    int count=0;
    
    for (int i=0; i<3; i++)
    {
        if (a[i]==a[i+1])
        {
            count++;
        }
    }
    
    std::cout << count <<std::endl;
 

 return 0;
}