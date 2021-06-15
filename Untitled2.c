#include<stdio.h>
#include<stdlib.h>
int *getnewlist(int size)
{
    return (int *)malloc(sizeof(int)*size);

}

void insert (int *arr,int n,int pos,int item)
{
    int i;
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[i]=item;
}
void  delete(int *arr,int n,int pos)
{
    int i;
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
}
void update(int *arr,int n,int pos,int item)
{
int i;
for(i=0;i<n;i++)
arr[pos]=item;



}
void printArr(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    printf("\n");
}
int main()
{
    int *arr=getnewlist(100) ;
    int i,n,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        //scanf("%d",&z);
        //while(z--)
       // {
insert(arr,n++,2,20);
       printArr(arr,n);
        printf("...\n");
       delete(arr,n--,4);
          printArr(arr,n);
        printf("...\n");
      update(arr,n,1,6);
        printArr(arr,n);



}

