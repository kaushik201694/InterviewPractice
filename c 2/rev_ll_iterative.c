#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;

node* head;

void reverse() {
    node *cur,*prev, *nxt;
    cur = head;
    prev=NULL;
    while(cur!=NULL) {
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    head=prev;
}

void insert(int a,int x) {
    node* temp = (node*)malloc(sizeof(node*));
    temp->data=a;
    if(x == 1) {
        temp->next=head;
        head=temp;
        return;
    }    
    node* temp1= head;
    for(int i=0;i<x-2;i++) {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}

void print() {
    node* temp= head;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main()
{
    printf("Hello World\n");
    head=NULL;
    insert(10,1);
    insert(20,1);
    insert(27,2);
    insert(32,3);
    printf("The List created is: \n");
    print();
    printf("Reversing the linked list\n");
    reverse();
    print();
    
    return 0;
}
