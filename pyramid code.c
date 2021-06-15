#include<stdio.h>

int main ()
{
    int i, n, number;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        printf("Case %d:\n", i);

        int row, col;

        for(row = 1; row <= a; row++)
        {
            for(col = 1; col<= row; col++)
            {
                printf("%d", col);
            }
            printf("\n");
        }

    }
    return 0;
}
