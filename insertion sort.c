#include<stdio.h>
void insertion(int a[],int n)
{
    int i,x,j;
    for(i=0;i<n;i++)
    {
       x=a[i];
       j=i-1;
       while(j>=0&&a[j]>x)
       {
           a[j+1]=a[j];
           j=j-1;
       }

       a[j+1]=x;
    }

}
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertion(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
