/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1173 ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long array[10], i = 1;
    array[0] = n;
    cout << "N[" << 0 << "] = " << array[0] << endl;
    for(int i=1;i<10;i++)
    {
        array[i] = array[i - 1] + array[i - 1];
        cout << "N[" << i << "] = " << array[i] << endl;
    }

    return 0;
}