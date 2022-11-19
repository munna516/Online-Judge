#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   vector<int> ar(4);
   for(int i=0;i<4;i++)
     {
        cin>>ar[i];
     }
    sort(ar.begin(),ar.end());
    cout<<abs((ar[0]+ar[3])-(ar[1]+ar[2]))<<endl;
    return 0;
}