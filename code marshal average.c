#include <stdio.h>

int main ()
{
    int i, j, n;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int sum = 0, number, average = 0, m;
        scanf("%d", &m);
        for(j = 0; j < m; j++)
        {
            scanf("%d", &number);
            sum += number;
        }
        average = (int) sum/m;
        printf("Case %d: %d\n", i+1, average);
    }

    return 0;
}
