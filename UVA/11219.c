#include <stdio.h>
int main()
{
    int t, i, d, m, y, d1, m1, y1, age;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {

        scanf("%d/%d/%d", &d, &m, &y);
        getchar();
        scanf("%d/%d/%d", &d1, &m1, &y1);
        age = y - y1;
        if (m1 > m || (m1 == m && d1 > d))
            age--;
        if (age < 0)
        {

            printf("Case #%d: Invalid birth date\n", i);
        }
        else if (age > 130)
        {
            printf("Case #%d: Check birth date\n", i);
        }
        else
        {
            printf("Case #%d: %d\n", i, age);
        }
    }

    return 0;
}