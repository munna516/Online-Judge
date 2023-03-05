/***   Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1179   ***/

#include <bits/stdc++.h>
using namespace std;
int par[5] = {0}, impar[5] = {0};
void par_print(int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "par[" << i << "] = " << par[i] << endl;
    }
}
void impar_print(int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
}
int main()
{
    int n, a = 0, b = 0;

    for (int i = 0; i < 15; i++)
    {
        cin >> n;
        if (abs(n) % 2 == 0)
        {
            par[a] = n;
            ++a;
        }
        if (abs(n) % 2 == 1)
        {
            impar[b] = n;
            ++b;
        }
        if (a == 5)
        {
            par_print(a);
            a = 0;
        }
        if (b == 5)
        {
            impar_print(b);
            b = 0;
        }
    }
    impar_print(b);
    par_print(a);

    return 0;
}