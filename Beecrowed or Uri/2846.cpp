/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/2846   ***/

#include <bits/stdc++.h>
using namespace std;
#define max_size 100100
long long ar1[max_size];
long long  ar2[max_size];
void fib()
{
    ar1[0] = 0;
    ar1[1] = 1;
    for (int j = 2; j <= max_size; j++)
    {
        ar1[j] = ar1[j - 1] + ar1[j - 2];
    }
    for (int i = 1, j = 2, k = 1; i <= max_size; ++i)
    {
        if (ar1[j] != i)
            ar2[k++] = i;
        else
            j++;
    }
}
int main()
{
    long long n;
    fib();
    cin >> n;
    cout << ar2[n] << endl;
    return 0;
}