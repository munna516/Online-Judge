#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int num, count = 0;
        scanf("%lld", &num);
        while (1)
        {
            long long int a, reverse = 0;
            a = num;
            while (a != 0)
            {
                int r = a % 10;
                reverse = reverse * 10 + r;
                a = a / 10;
            }
            if (reverse == num)
            {
                break;
            }
            else
            {
                count++;
                num = num + reverse;
            }
        }
        printf("%lld %lld\n", count, num);
    }

    return 0;
}