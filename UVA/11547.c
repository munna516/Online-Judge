#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int num;
        scanf("%d", &num);
        int x = (num * 63 + 7492) * 5 - 498;
        if (x < 0)
            x *= -1;
        printf("%d\n", x / 10 % 10);
    }
    return 0;
}