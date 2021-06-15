#include<stdio.h>
int main()
{
    int array[10000],i,n,cnt=0;
    scanf("%d",&n) ;
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i+=2)
    {
        cnt+=array[i];
    }
    printf("%d\n",cnt) ;
    return 0;
}
