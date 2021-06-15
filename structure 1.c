#include<stdio.h>
#include<string.h>
struct  munny
{
    char name[100];
    int age;
    int phonenumber;
    int id;

};
typedef  struct munny mahu;
int main()
{
    mahu mahmuda[10];
    int n,i;
    int     phonenumber;
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        printf("Enter information of person number:%d\n",i);

        scanf("%s",mahmuda[i].name);
        scanf("%d",&mahmuda[i]. age);
        scanf("%d",&mahmuda[i].phonenumber);


    }
      for(i=1; i<=n; i++)
            printf("Name: %s\n Age:%d\n Number:%d\n",mahmuda[i].name,mahmuda[i].age,mahmuda[i],phonenumber);
}


