#include<stdio.h>
int main()
{
    int n,tc,i=1,j;
      scanf("%d",&tc);
     while(tc--) {


    {
        scanf("%d",&n);
        printf("Case %d:\n",i++);

        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",n,j,n*j);
        }
    } }
    return 0;
}
