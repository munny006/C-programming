#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    int a,b,c,p;
    double res;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        p=((a+b+c)/2);
        res =sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Case %d: %.10lf\n",i,res);
    }

}
