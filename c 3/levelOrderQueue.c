#include <stdio.h>
#include <stdlib.h>

typedef struct TREENODE
{
    int data;
    struct TREENODE *left;
    struct TREENODE *right;
}node;

typedef struct QUEUE{
    node *nodeData;
    struct QUEUE *next;
}q;

q *front = NULL;
q *rear = NULL;

node *createNode(int a)
{
    node *temp = malloc(sizeof(node));
    temp->data = a;
    temp->left = NULL;
    temp->right = NULL;
}

void enqueue(node *a)
{
    q *temp = malloc(sizeof(q));
    temp->nodeData = a;
    
    if(front == NULL && rear == NULL)
    {
        front = temp;
        rear = temp;
        return;
    }
    front -> next = temp;
    front = temp;
}

node *dequeue()
{
    node *temp = rear->nodeData;
    
    rear = rear ->next;
    
    return temp;
}

void printLevelOrder(node *root)
{
    node *temp = root;
    while(temp)
    {
        printf("%d ", temp->data);
        
        if(temp->left)
            enqueue(temp->left);
        if(temp->right)
            enqueue(temp->right);
        
        temp = dequeue();
    }
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
    
    printLevelOrder(root);
    return 0;
}
