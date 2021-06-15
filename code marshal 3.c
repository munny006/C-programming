#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,n;
    scanf("%d",&n);
    gets(s);
    int m=strlen(m);
    for(i=0;i<m;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s ",s);
}
