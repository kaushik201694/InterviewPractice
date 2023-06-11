#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;

node* head;

void delete(int n) {
    node* temp = head;
    if(n == 1) {
        head=temp->next;
        free(temp);
        return;
    }
    for(int i=0;i<n-2;i++)
        temp=temp->next; 
    //temp here points to (n-1)th node
    node* temp2=temp->next;
    free(temp2);
    temp->next=temp->next->next;
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

int main() {
    printf("Hello World\n");
    head=NULL;
    insert(10,1);
    insert(20,1);
    insert(27,2);
    insert(32,3);
    printf("The List created is: \n");
    print();
    int n;
    printf("Enter the node pos which you want to be deleted\n");
    scanf("%d",&n);
    delete(n);
    printf("List after node deletion\n");
    print();
    
    return 0;
}
