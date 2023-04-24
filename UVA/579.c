#include <stdio.h>
int main()
{
    float h, m, d1, d2, de;
    while (1)
    {
        scanf("%f:%f", &h, &m);
        if (h == 0 && m == 0)
            break;
        d2 = 6 * m;
        d1 = 30 * (h + (d2 / 360));
        if (d2 > d1)
            de = d2 - d1;
        else
            de = d1 - d2;
        if (de > 180)
            printf("%.3f\n", 360 - de);
        else
            printf("%.3f\n", de);
    }
    return 0;
}