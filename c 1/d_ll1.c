#include<stdio.h>
#include<stdlib.h>

typedef struct NODE* node;

struct NODE {
    int data;
    node next;
    node prev;
};

void push(node *head, int a) {
    node temp = malloc(sizeof(node));
    temp->data = a;
    temp->next = NULL;
    temp->prev = NULL;
	
    
    if((*head) != NULL) {
        temp->next = (*head);
        (*head)->prev = temp;
    }
    (*head) = temp;
}

node fun(node head,int val) {
    node temp = malloc(sizeof(node));
    temp->data = val;
    if(head == NULL) {
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
        return head;
    }
    node curr = head->next;
    node prev = head;
    
    if(val < prev->data) {
        temp->next = prev;
        prev->prev = temp;
        head = temp;
        return head;
    }
    
    while(curr !=NULL && curr->data < val) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = temp;
    temp->prev = prev;
    temp->next = NULL;
    if(curr!=NULL){
        temp->next = curr;
        curr->prev = temp;
    }
    
    return head;
}


void print(node head) {
    while(head!=NULL) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    node head = NULL;
    push(&head,8);
    push(&head,5);
    push(&head,4);
    push(&head,2);
    push(&head,1);
    
    print(head);
    
    node nHead = fun(head,6);  //we will insert 6 in the stack
                               //but it has to maintain the ascending order
    print(nHead);
    return 0;
}

/*
O/P
----
1 2 4 5 8 
1 2 4 5 6 8 

*/