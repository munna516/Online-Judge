#include <stdio.h>

int main()
{
    int count, x, n, i, casenum = 0;
    while (scanf("%d", &n) && n > 0)
    {
        count = 0;
        x = 1;
        if (n == 1)
            printf("Case %d: 0\n", ++casenum);
        else
        {
            for (i = 0; x < n; i++)
            {
                x += x;
                count++;
            }
            printf("Case %d: %d\n", ++casenum, count);
        }
    }
    return 0;
}