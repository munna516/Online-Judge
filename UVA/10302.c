#include <stdio.h>
int main()
{
    long long ans[51000] = {0};
    int num;
    for (int i = 1; i <= 50000; i++)
        ans[i] = ans[i - 1] + (i * i * i);
    while (scanf("%d", &num) != EOF)
        printf("%lld\n", ans[num]);
    return 0;
}