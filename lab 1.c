#include<stdio.h>
#include<stdlib.h>
struct N
{
    int value;
    struct N *next ;
};
typedef struct N Node  ;
Node *root ,*tail;
Node *getnewnode(int item)
{
    Node *n=(Node*)malloc(sizeof(Node));
    n->value=item;
    n->next=NULL;
    return n;
}
void insert(int item)
{
    if(root==NULL)
    {
        root=getnewnode(item);
        tail=root;
    }
    else
    {
        Node*temp=getnewnode(item);
                  tail->next=temp;
        tail=temp;
    }
}
void printlist(Node* node)
{
    if(node==NULL )
        return;
    printf("%d ",node->value);
    printlist(node->next)  ;
}
int main()
{
    insert(11);
     insert(16);
     printlist(root);

}
