#include<stdio.h>
#include<stdlib.h>

typedef struct NODE* node;
struct NODE {
    int data;
    node next;
};

void insert(node *head, int a) {
    node temp = malloc(sizeof(node));
    temp->data = a;
    temp->next = NULL;

    if(*head == NULL)
    {
        *head = temp;
        return;
    }

    node temp1 = *head;
    while(temp1->next != NULL)
        temp1 = temp1->next;
    temp1->next = temp;

}

void reverse(node *head)
{
    node cur = *head;
    node prev = NULL;
    node nx = NULL;

    while(cur != NULL)
    {
        nx = cur ->next;
        cur->next = prev;
        prev = cur;
        cur = nx;
    }

    *head = prev;
}

void reverseBetween(node *head, int left, int right){
    if(left == right)
        return head;
    
    node temp = *head;
    node temp2 = *head;
    int k=0;
    while(++k != (left-1) )
    {
        temp = temp->next;
    }
    k=0;
    while(++k != (right+1) )
    {
        temp2 = temp2->next;
    }
    node cur = temp->next;
    node n = temp;
    node prev = temp;
    for(k = left; k<=right; k++)
    {
        n = cur->next;
        cur->next = prev;
        prev = cur;
        cur = n;
    }
    cur->next = temp2;
    temp-> next = prev;
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
    insert(&head, 7);
    insert(&head, 13);
    insert(&head, 90);
    insert(&head, 9);
    insert(&head, 6);
    insert(&head, 46);
    insert(&head, 56);
    insert(&head, 786);
    insert(&head, 673);
    insert(&head, 63);
    insert(&head, 642);
    insert(&head, 165);
    insert(&head, 1690);
    print(head);
    reverse(&head);
    print(head);
    reverseBetween(&head, 3, 7);
    print(head);
}