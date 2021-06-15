#include<stdio.h>
int main()
{
    int i,j,row,col;
    int a[10][10],b[8][8],c[7][5];
    printf("enter the number of row && col: ");
    scanf("%d %d",&row,&col);
    printf("enter the elements of a matrix :");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of b matrix..");
    printf("enter the number of row && col: ");
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //addition the matrix.....

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("a + b=") ;
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }

}
