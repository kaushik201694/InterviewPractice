#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data) {
    struct node* Node = (struct node*)malloc(sizeof(struct node*));
    Node -> data=data;
    Node -> left = NULL;
    Node -> right = NULL;
    return (Node);
}

int heightTree(struct node* root) {
    int lheight , rheight;
    if(root == NULL)
        return 0;
    else {
         lheight =heightTree(root-> left);
         rheight = heightTree(root-> right);
    } 
    printf("\n Left Height:%d\n",lheight);
    printf("\n Right Height:%d\n",rheight);
    if(lheight > rheight)
        return(lheight + 1);
    else
        return(rheight + 1);
}

void printLevel(struct node* root , int level) {
    if(root == NULL)
        return;
    if (level == 1)
        printf("%d\t",root -> data);
    else if( level > 1)
    {
        //printf("%d\t",root-> data);
        printLevel(root -> left , level-1);
        printLevel(root -> right , level-1);
    }
}

void printLevelOrder(struct node* root) {
    int h = heightTree(root) , i;
    for(i=1;i<=h;i++) {
        printLevel(root,i);
    }
}

void inorder(struct node* node) {
    if (node == NULL)
        return;
    inorder(node -> left);
    printf("%d\t",node -> data);
    inorder(node -> right);
}


int main() {
    struct node* root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> right -> left = newNode(6);
    
    printf("The inorder traversal is :\n ");
    inorder(root);
    
    printf("\nThe level order travesal is : \n");
    printLevelOrder(root);
    
    return 0;
}
