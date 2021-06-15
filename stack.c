#include<stdio.h>
#include<stdlib.h>
int stk[100];
int head=0;
void push(int item)
{
    stk[head]=item;
    head++;

}
void pop()
{
    head--;
}
int top()
{
    return stk[head-1];
}
isEmpty ()
{
    return head==0;
}
int size()
{
    return head;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        push(a);
    }
    int j=1;
    pop();
    while(!isEmpty())
    {
        int x=top();
        printf(" Case %d:%d\n",j,x);
        j++;
        pop();
    }
}
