/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1134   ***/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, alcohol = 0, gasoline = 0, diesel = 0;
    cin >> n;
    while (1)
    {
        cin >> t;
        if (t == 1)
            alcohol++;
        else if (t == 2)
            gasoline++;
        else if (t == 3)
            diesel++;
        else if (t == 4)
            break;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}