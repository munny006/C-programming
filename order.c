#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

typedef struct node Node;

void inorder(Node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf(" %d >", root->data);
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root == NULL)
        return;
    printf(" %d >", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf(" %d >", root->data);
}

Node* getnewNode(value)
{
    Node* n = malloc(sizeof(Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

Node* insertLeft(Node *root, int value)
{
    root->left = getnewNode(value);
    return root->left;                      b
}

Node* insertRight(Node *root, int value)
{
    root->right = getnewNode(value);
    return root->right;
}

int main()
{
    int a;
    printf("Enter the root value of a tree ");
    scanf("%d", &a);
    struct node* root = getnewNode(a);
    int aleft, aright;
    printf("Enter the right and left value of root of the tree: ");
    scanf("%d %d", &aleft, &aright);
    insertLeft(root, aleft);
    insertRight(root, aright);
    int aleftleft, arightright;
    printf("Enter the left and right value of root-left value of the tree: ");
    scanf("%d %d", &aleftleft, &arightright);

    insertLeft(root->left, aleftleft);
    insertRight(root->left, arightright);

    printf("\nInorder : ");
    inorder(root);
    printf("\n\nPreorder : ");
    preorder(root);
    printf("\n\nPostorder : ");
    postorder(root);
    printf("#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

typedef struct node Node;

void inorder(Node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf(" %d >", root->data);
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root == NULL)
        return;
    printf(" %d >", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf(" %d >", root->data);
}

Node* getnewNode(value)
{
    Node* n = malloc(sizeof(Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

Node* insertLeft(Node *root, int value)
{
    root->left = getnewNode(value);
    return root->left;
}

Node* insertRight(Node *root, int value)
{
    root->right = getnewNode(value);
    return root->right;
}

int main()
{
    int a;
    printf("Enter the root value of a tree ");
    scanf("%d", &a);
    struct node* root = getnewNode(a);
    int aleft, aright;
    printf("Enter the right and left value of root of the tree: ");
    scanf("%d %d", &aleft, &aright);
    insertLeft(root, aleft);
    insertRight(root, aright);
    int aleftleft, arightright;
    printf("Enter the left and right value of root-left value of the tree: ");
    scanf("%d %d", &aleftleft, &arightright);

    insertLeft(root->left, aleftleft);
    insertRight(root->left, arightright);

    printf("\nInorder : ");
    inorder(root);
    printf("\n\nPreorder : ");
    preorder(root);
    printf("\n\nPostorder : ");
    postorder(root);
    printf("\n");
}\n");
}
