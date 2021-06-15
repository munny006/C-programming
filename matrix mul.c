#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],c[10][10];
    int r1,r2,c1,c2,i,j,k,result,sum=0;
    printf("1st matrix row &&col: ");
    scanf("%d %d",&r1,&c1);
    printf("2nd matrix row &&col: ");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("error");
        printf("1st matrix row &&col: ");
        scanf("%d %d",&r1,&c1);
        printf("2nd matrix row &&col: ");
        scanf("%d %d",&r2,&c2);

    }
    //1st matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //2nd matrix
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                int sum=0;
                sum=sum+A[i][k]*B[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",A[i][j]);
        }
    }

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",B[i][j]);
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)

            printf("%d ",result[i][j]);

    }

}
