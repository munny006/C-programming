

  #include<stdio.h>
  #include<stdlib.h>

 ///Merge Sort
int num[100000],temp[100000];
void  mergesort(int lo, int hi)
{
    if(lo==hi)return ;
    int mid = (lo+hi)/2;
    mergesort(lo,mid);
    mergesort(mid+1,hi);

    int i,j,k;
    for( i=lo,j = mid+1,k=lo; k<=hi; k++)
    {
        if(i==mid+1)temp[k] = num[j++];
        else if(j==hi+1)temp[k] = num[i++];
        else if(num[i]<num[j])temp[k] = num[i++];
        else temp[k] = num[j++];
    }
    for(k=lo; k<=hi; k++)
        num[k] = temp[k];
}


int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for( i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    mergesort(0,n-1);
    for( i=0; i<n; i++)
        printf("%d ",num[i]);
}
