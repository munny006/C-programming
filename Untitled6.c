#include<stdio.h>
#include<string.h>

void insert(char str[], int z)
{
    int i, position;
    scanf("%d", &position);
    for(i=z; i>position; i--)
        str[i] = str[i-1];
    str[i] = 'a';
}

int main()
{
    char str[1000];
    gets(str);
    int z = strlen(str), i;
    insert(str, z);
    for(i=0; i<=z; i++)
        printf("%c ", str[i]);

}
