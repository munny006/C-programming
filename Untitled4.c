#include<stdio.h>
#include<stdlib.h>
int *getnewlist(size)
{
    return (int *)malloc(sizeof(int)*size);
} ;
void insert(int *a,int n,int pos,int item)
{
    int i;
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];

    }
    a[pos]=item;
}
void print(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d",&a[i]);
    printf("\n");

}
int main()
{
    int *a=getnewlist(100),n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    insert(a,n++,3,5);
     print(a,n,3,5);


}




