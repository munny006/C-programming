#include<stdio.h>
#include<string.h>

void insert(char str[], int n, int pos, char item)
{
    int i;
    for(i=pos; i>n; i--)
        str[i] = str[i-1];
    str[i] = item;
}

void  del(char str[], int n, int pos)
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
    char str[100];
    gets(str);
    int n = strlen(str);

    insert(str, n++, 3, 'x');
    printf("After inserting: \n");
    printstr(str, n);

    del(str, n--, 2);
    printf("After deleting: \n");
    printstr(str, n);

    update(str, n, 'a', 'b');
    printf("After updating: \n");
    printstr(str, n);

    return 0;
}
