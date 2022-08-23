#include<iostream>
using namespace std;
int main()
{
 int test;
 std::cin>>test;
 while(test--)
   {
    long long int x;
    cin>>x;
    cout<<x-(x/5)<<endl;  
   }

 return 0; 
}
