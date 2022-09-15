/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1161   ***/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve_a(int x)
{
    ll fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
ll solve_b(int x)
{
    ll fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    ll a, b;
    while (cin >> a >> b)
    {
        ll m = solve_a(a);
        ll n = solve_b(b);
        cout << m + n << endl;
    }

    return 0;
}