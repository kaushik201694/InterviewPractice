#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* right;
    struct NODE* left;
}node;

node* newNode(int data) {
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

void inOrder(node* root) {
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}

void mirror(node* root) {
    if (root == NULL)
        return;
    
    node* temp;    
    mirror(root->left);
    mirror(root->right);
    
    temp=root->left;
    root->left=root->right;
    root->right=temp;
}

int main() 
{ 
  node *root = newNode(1); 
  root->left        = newNode(2); 
  root->right       = newNode(3); 
  root->left->left  = newNode(4); 
  root->left->right = newNode(5);  
    
  /* Print inorder traversal of the input tree */
  printf("Inorder traversal of the constructed"
           " tree is \n"); 
  inOrder(root); 
    
  /* Convert tree to its mirror */
  mirror(root);  
    
  /* Print inorder traversal of the mirror tree */
  printf("\nInorder traversal of the mirror tree"
         " is \n");   
  inOrder(root); 
    
  return 0;   
} 


/*
O/P
----
Inorder traversal of the constructed tree is 
4 2 5 1 3 
Inorder traversal of the mirror tree is 
3 1 5 2 4 

*/