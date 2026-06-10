#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // increasing numbers
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        // decreasing numbers
        for (int l = i - 1; l >= 1; l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}