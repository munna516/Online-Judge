#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        gcd(b, a % b);
}
int main()
{
    int n, i, j, g;
    while (scanf("%d", &n) && n != 0)
    {
        g = 0;
        for (i = 1; i < n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                g += gcd(i, j);
            }
        }
        printf("%d\n", g);
    }
    return 0;
}