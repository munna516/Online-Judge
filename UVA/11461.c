#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, i, p, m;
    while (scanf("%d%d", &x, &y) == 2)
    {
        if (x + y == 0)
            break;
        p = 0;
        for (i = x; i <= y; i++)
        {
            m = sqrt(i);
            if (m * m == i)
                p++;
        }
        printf("%d\n", p);
    }
    return 0;
}