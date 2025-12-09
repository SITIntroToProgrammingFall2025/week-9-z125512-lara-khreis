#include <stdio.h>

int main()
{
    int a[3][3], f[3][3], i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("You entered\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            f[i][j] = a[i][2-j];
        }
    }
    printf("Output\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", f[i][j]);
        }
        printf("\n");
    }
    return 0;
}