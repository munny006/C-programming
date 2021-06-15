#include<stdio.h>
#include<stdlib.h>
struct N
{
    char value;
    struct N *next ;
};
typedef struct N Node  ;
Node *root ,*tail;
Node *getnewnode(char item)
{
    Node *n=(Node*)malloc(sizeof(Node));
    n->value=item;
    n->next=NULL;
    return n;
}
void insert(char item)
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
    printf("%c ",node->value);
    printlist(node->next)  ;
}
int main()
{
    insert('a');
     insert('b');
      insert('z');
     printlist(root);

}
