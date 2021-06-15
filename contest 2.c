#include<stdio.h>
#include<string.h>
struct  munny
{
    char name[100];
    int day;
    int year;
    int month;


};
typedef  struct munny mahu;
int main()
{
    mahu mahmuda[10];
    int n,i;
    int     year;
    int name;
    int day;
    int month;
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        printf("Enter information of person number:%d\n",i);

        scanf("%s",mahmuda[i].name);
        scanf("%d",&mahmuda[i].day);
        scanf("%d",&mahmuda[i].year);
        scanf("%d",&mahmuda[i]. month) ;

        if(year==year)
            if(month==month)
            if(day>=day)
            printf("%s\n",name);
        else
            printf("%s\n",name);
    }
}
