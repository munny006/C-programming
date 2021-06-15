#include<stdio.h>
int arr[100000];
int search(int*arr,int n,int item)
{
    int start=0,end=n-1,loc;
    int mid=(start+end)/2;
    while(start<=end&&arr[mid]!=item)
    {
        if(arr[mid]>item)
            end=mid-1;
        else
            start=mid+1;
        mid=(start+end)/2;

    }
    if(arr[mid]==item)
    {
        loc=mid;
        return loc;
    }
    else
        return -1;

}
int main()
{
    int n;
    int i,c=1,item;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&item);
        int pos=search(arr,n,item);
        printf("Case %d:%d\n",c++,pos);
    }
    return 0;
}
