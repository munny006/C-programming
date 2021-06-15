
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
void inorder(struct node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf(" %d >", root->data);
    inorder(root->right);
}
void preorder(struct node* root)
{
    if(root == NULL)
        return;
    printf(" %d >", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf(" %d >", root->data);
}
struct node* getnewnode(int value)
{
    struct node *root =(struct *node) malloc(sizeof(struct) *node));
    root->data = value;
    root->left = NULL;
    root->right = NULL;
    return root;
}
struct node* insertLeft(struct node *root, int value)
{
    root->left = getnewNode(value);
    return root->left;
}
struct node* insertRight(struct node *root, int value)
{
    root->right = getnewNode(value);
    return root->right;
}
int main()
{
    int rt;
    printf("Enter the root value of tree: ");
    scanf("%d", &rt);
    struct node* root = getnewNode(rt);
    insertLeft(root, 10);
    insertRight(root, 20);

    insertLeft(root->left, 30);
    insertRight(root->left, 40);

    insertLeft(root->right, 50);
    insertRight(root->right, 60);

    printf("Inorder: ");
    inorder(root);
    printf("\n\nPreorder: ");
    preorder(root);
    printf("\n\nPostorder: ");
    postorder(root);
    printf("\n");
}

