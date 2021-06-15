#include <stdio.h>

int main ()
{
    int i,j=1,  n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        int a, b, c, max = 0;
        scanf("%d %d %d", &a, &b, &c);

        if(a >= b && a >= c)
        {
            max = a;
        }

        if(b >= a && b >= c)
        {
            max = b;
        }

        if(c >= a && c >= b)
        {
            max = c;
        }

        if(c == b == a)
        {
            max = c;
        }

        printf("Case %d: %d\n", j++, max);

    }

    return 0;
}
