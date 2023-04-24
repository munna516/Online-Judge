#include <stdio.h>
#define x acos(-1)
int main()
{
    int Tc, l, a;
    double a, b, c, d, e;
    scanf("%d", &Tc);
    for (a = 0; a < Tc; a++)
    {
        scanf("%d", &l);
        a = l * 0.6;
        b = l * 0.2;
        c = l * a;
        e = x * b * b;
        d = c - e;
        printf("%.2lf %.2lf\n", e, d);
    }
    return 0;
}