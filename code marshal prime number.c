#include<stdio.h>
int main()
{
    int n,a,b,i,tc,cnt=0;
    scanf("%d",&n);
    while(tc--)
    {
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(n%i==0)
                cnt++; }
            printf("%d ",cnt);

    }
}

