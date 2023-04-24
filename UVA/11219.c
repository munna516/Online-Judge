#include <stdio.h>
int main()
{
    int a, b, c, d, x, y, age, t, i;
    while (scanf("%d", &t) == 1)
    {
        for (i = 1; i <= t; i++)
        {
            scanf("%d/%d/%d", &b, &d, &y);
            scanf("%d/%d/%d", &a, &c, &x);
            if (a > b)
            {
                b = b + 30;
                c = c + 1;
            }
            if (c > d)
            {
                d = d + 12;
                x = x + 1;
            }
            age = y - x;
            if (age < 0)
                printf("Case #%d: Invalid birth date\n", i);
            else if (age > 130)
                printf("Case #%d: Check birth date\n", i);
            else
                printf("Case #%d: %d\n", i, age);
        }
    }
    return 0;
}