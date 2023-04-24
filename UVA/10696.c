#include <stdio.h>

int main()
{
    int num;
    while (scanf("%d", &num) && num != 0)
    {
        if (num >= 101)
            printf("f91(%d) = %d\n", num, num - 10);
        else
            printf("f91(%d) = 91\n", num);
    }
    return 0;
}