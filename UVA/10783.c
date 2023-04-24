#include <stdio.h>
int main()
{
    int t, n = 1, a, b, i, sum;
    scanf("%d", &t);
    while (n <= t)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        sum = 0;
        for (i = a; i <= b; i++)
        {
            if (i % 2 == 1)
                sum += i;
        }
        printf("Case %d: %d\n", n++, sum);
    }
    return 0;
}