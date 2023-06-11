#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode* treeNode;

struct TreeNode
{
    int data;
    treeNode left;
    treeNode right;
};

int height(treeNode root)
{
    if(root == NULL)
        return 0;
    
    int lheight = height(root->left);
    int rheight = height(root->right);
    
    if(lheight > rheight)
        return lheight+1;
    else
        return rheight+1;
}

void PrintCurrentLevel(treeNode root, int level)
{
    if(root == NULL)
        return;
    if(level == 1)
        printf("%d ", root->data);
    else if(level > 1)
    {
        PrintCurrentLevel(root->left, level-1);
        PrintCurrentLevel(root->right, level-1);
    }
    
}

void PrintLevelOrder(treeNode root)
{
    int h = height(root);
    printf("The height of the tree is %d\n", h);

    for(int i=0; i<h; i++)
        PrintCurrentLevel(root, i);
}

treeNode newNode(int val)
{
    treeNode temp = malloc(sizeof(treeNode));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

int main()
{
    treeNode root = newNode(3);
    root->left = newNode(6);
    root->right = newNode(35);
    root->right->left = newNode(43);
    root->right->right = newNode(19);
    root->left->right = newNode(12);
    root->left->left = newNode(39);
    root->left->left->right = newNode(92);
    root->right->left->left = newNode(77);

    PrintLevelOrder(root);

    return 0;
}