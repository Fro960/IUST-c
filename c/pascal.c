#include <stdio.h>

int main(void)
{
    int n, k;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (int l = k - 2; l >= 1; l--)
        {
            if (i == 1)
            {
                continue;
            }
            else
            {
                printf("%d", l);
            }
        }
        for (int m = 1; m <= n - i; m++)
        {
            printf(" ");
        }
        printf("\n");
    }
}