#include<stdio.h>
int main()
{
    int a,b,c,i,n,ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>=b&&a<=c||a<=b&&a>=c)
            ans=a;
        else if(b>=a&&b<=c||b<=a&&b>=c)
            ans=b;
        else if(c>=a&&c<=b||c<=a&&c>=b)
            ans=c;
        printf("Case %d: %d\n",i,ans);
    }
      return 0;
}
