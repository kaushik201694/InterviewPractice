#include <stdio.h>
#include <stdlib.h>

typedef struct TREENODE
{
    int data;
    struct TREENODE *left;
    struct TREENODE *right;
}node;

node *createNode(int a)
{
    node *temp = malloc(sizeof(node));
    temp->data = a;
    temp->left = NULL;
    temp->right = NULL;
}

node *LCA(node *root, node *p , node *q)
{
    if( root == p || root == q || root == NULL)
        return root;
    
    node *parent1 = LCA(root->left, p, q);
    node *parent2 = LCA(root->right, p, q);
    if( parent1 && parent2)
        return root;
    else
        return parent1 ? parent1:parent2;
}

int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->right->right->left = createNode(8);
    root->right->right->right = createNode(9);

    node *p =  root->right->right->left;
    node *q = root->right->right->right;
    node *temp = LCA(root, p, q);

    printf("The Lowest Common Ancestor is: %d", temp->data);
    return 0;
}
