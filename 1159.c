
#include <stdio.h>
int main()
{
int i,m,j,sum=0;
scanf("%d",&m);
while(m!=0)
{
if(m%2==0)
m=m;
else
m=m+1;
for(j=1;j<=5;j++)
{
sum+=m;
m=m+2;
}
printf("%d\n",sum);
m=0;
sum=0;
scanf("%d",&m);
}
return 0;
}
