#include <stdio.h>
#include <cstring>

int main()
{
    int n, i, j, k, count;
    char num1[1001], num2[1001];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        count = 0;
        scanf("%s %s", &num1, &num2);
        for (j = strlen(num2), k = strlen(num1); j >= 0; j--, k--)
        {
            if (num1[k] == num2[j])
                count++;
            else
                break;
        }
        if (count == strlen(num2) + 1)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    return 0;
}