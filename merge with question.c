#include<st a[100],b[100];
void merge(int c,int d)
{
    if(c==d)
        return ;
    int mid=(c+d)/2;
    merge(c,mid);
    merge(c+1,d);
    int i,j,k;
    for(i=c,j=mid+1,k=c; k<=d; k++)
    {

        if(i==mid+1)
            b[k]=a[j++];
        else if(j==d+1)
            b[k]=a[i++];
        else if(a[i]<a[j])
            b[k]=a[i++];
        else
            b[k]=a[j++];
    }
    for(k=c; k<=d; k++)
        a[k]=b[k];
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("lf",&a[i]);
    merge(0,n-1);
    for(i=0; i<n; i++)
        printf("d",a[i]);


}
