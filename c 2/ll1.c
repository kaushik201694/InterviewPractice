#include<stdio.h>
#include<stdlib.h>

typedef struct NODE node;

struct NODE{
    int data;
    node *next;
};

void push(node **head, int a) {
    node *temp = malloc(sizeof(node));
    temp->data = a;
    temp->next = NULL;
    
    if(head != NULL) {
        temp->next = *head;
        *head = temp;
    }
}

void fun1(node **head) {
    node *curr = *head;
    node *prev = NULL;
    
    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    
    curr->next = *head;
    *head = curr;
    prev->next = NULL;
}

void print(node *head) {
   // node *temp = head;
    while(head != NULL) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    node *head = NULL;
    
    push(&head,5);
    push(&head,6);
    push(&head,7);
    push(&head,8);
    push(&head,9);
    
    print(head);
    
    fun1(&head);
    
    print(head);
}