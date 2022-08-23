#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,p,q,i,j,count=0;
 cin>>n;
 cin>>p;
 int ary1[p];
 // Scaning p elemnts
 for(int i=0;i<p;i++)
   {
    cin>>ary1[i];
   }
  // Scaning q elements
  cin>>q;
  int ary2[q];
 for(int i=0;i<q;i++)
   {
    cin>>ary2[i];
   } 
// Matching elements
  for(int i=0;i<p;i++ )
    {
      for(int j=0;j<q;j++)
        {
           if(ary1[i]==ary2[j])
              count++;
        }
    }

 int x=(p+q)-count;
 
 if(n==x)
   cout<<"I become the guy."<<endl;
 else 
    cout<<"Oh, my keyboard!"<<endl;  

 return 0;  
}