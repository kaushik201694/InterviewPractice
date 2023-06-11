#include<stdio.h>
#include<stdlib.h>

typedef struct NODE* node;

struct NODE{
    int data;
    node next;
};

void push(node *head, int a) {
    node temp = malloc(sizeof(node));
    temp->data = a;
    temp->next = NULL;
    
    if(head != NULL) {
        temp->next = *head;
        *head = temp;
    }
}

void fun1(node *head) {
    node curr = *head;
    node nxt = (*head)->next;
    
    while(nxt->next != NULL) {
        curr = curr->next;
        nxt = nxt->next;
    }
    
    nxt->next = (*head);
    (*head) = nxt;
    curr->next = NULL;
}

void print(node head) {
    while(head != NULL) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    node head = NULL;
    
    push(&head,2);
    push(&head,2);
    push(&head,15);
    push(&head,28);
    push(&head,28);
    push(&head,28);
    push(&head,37);
    push(&head,88);
    push(&head,139);
    push(&head,139);
    
    
    print(head);
    
    fun1(&head);   // function to move last elemnt of the given linked list to the front.
    
    print(head);
}

/*O/P
139 139 88 37 28 28 28 15 2 2 
2 139 139 88 37 28 28 28 15 2 


*/