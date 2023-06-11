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


node fun(node head) {
    for(node temp1 = head; temp1!=NULL; temp1 = temp1->next) {
        for(node temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next) {
            if(temp1->data > temp2->data) {
                temp1->next = temp2->next;
                temp1->prev = temp2;
                temp2->next = temp1;
                temp2->prev = temp1->prev;
            }
        }
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
    push(&head,18);
    push(&head,15);
    push(&head,41);
    push(&head,24);
    push(&head,35);
    
    print(head);
    
    node nHead = fun(head);
    print(nHead);
    return 0;
}
