#include<stdio.h>
#include<string.h>
void insert(char str[], int n, int a,char ch1,char ch2,char ch3)
{
    int i;
    for(i=n+2; i>a; i--)
        str[i] = str[i-3];
    str[a] = ch1 ;
    str[a+1] = ch2 ;
    str[a+2] = ch3 ;
}
void del(char str[], int n, int pos)
{
    int i;
    for(i=pos; i<n; i++)
    {
        str[i]= str[i+1];
    }
}
void update(char str[], int n, char olditem, char newitem)
{
    int i;
    for(i=0; i<n; i++)
        if(str[i] == olditem)
            str[i] = newitem;
}
void printstr(char str[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%c ", str[i]);
    printf("\n");
}
int main()
{
    char str[100],ch1,ch2,ch3;
    int a,pos,item;
    gets(str);
    int n = strlen(str);
    scanf("%d",&a);
    getchar();
    scanf("%c %c %c", &ch1, &ch2, &ch3);
    insert(str, n+=3,a,ch1,ch2,ch3);
    printf("After inserting: \n");
    printstr(str, n);

    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    del(str, n--, pos);
    printf("After deleting: \n");
    printstr(str, n);


    char b, c;
    getchar();
    printf("Enter two character to update the string: ");
    scanf("%c %c", &b, &c);
    update(str, n, b, c);
    printf("After updating: \n");
    printstr(str, n);


}
