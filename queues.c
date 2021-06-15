#include<stdio.h>
#include<stdlib.h>

int stk[100];
int head=0,tail=0;
void push(int item)
{
    stk[tail]=item;
    tail++;

}
void pop()
{
    head++;
}
int front ()
{
    return stk[head];
}
int isEmpty()
{
    return head==tail;
}
int size()
{
    return tail-head;
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
        int x=front();
    printf(" Case %d:%d\n",j,x);
    j++;
        pop();
    }
}
