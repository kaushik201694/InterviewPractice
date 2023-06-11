#include <stdio.h>

typedef struct StackNode {
    int data;
    struct StackNode* next;
}Stack;

Stack* root;

void push(int data) {
    Stack* temp = (Stack*)malloc(sizeof(Stack));
    temp-> data=data;
    temp->next=NULL;
    if(root != NULL)
      {  temp->next=root;
        return;}
    root=temp;    
}

void print() {	
    Stack* temp=root;
    int i=0;
    while(temp->next !=NULL && i>=0) {
        printf("%d\n",i+1);
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

int peek() {
    if(root == NULL)
        return;
    return root->data;
}

int pop() {
    if(root == NULL)
        return;
    Stack* temp=root;
    root=root->next;
    int popped=temp->data;
    free(temp);
    return popped;
}

int main() {
    printf("Hello World\n");
    Stack* root = NULL;
    
    push(10);
    push(20);
    push(30);
    printf("The stack created is \n");
    print();
    printf("\nTop Element before pop operation: %d\n",peek());
    printf("%d popped out from the stack\n",pop());
    printf("Top Element after pop operation: %d\n",peek());
    
    return 0;
}
