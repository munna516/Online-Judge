#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
     int x,y;
     cin>>x>>y;
     int sum=x+y;
     // For A

     int A=(x*2)+(sum*4);
     int total_1=1500-A;
  
     // For B

     int B=(y*4)+(sum*2);
     int total_2=1500-B;
     
     if(total_1>=total_2)
        {
          cout<<total_1<<endl;
        }
     else
        {
          cout<<total_2<<endl;
        }
    }
 return 0;   
}