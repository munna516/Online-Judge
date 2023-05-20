/***  Problem Link :::  https://www.beecrowd.com.br/judge/en/problems/view/1012   ***/

#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159
int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << (a * c) / 2 << endl;
    cout << "CIRCULO: " << pi * c * c << endl;
    cout << "TRAPEZIO: " << (0.5) * (a + b) * c << endl;
    cout << "QUADRADO: " << b * b << endl;
    cout << "RETANGULO: " << a * b << endl;

    return 0;
}