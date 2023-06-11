
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;

void insert(node* HEAD,int a,int x) {
    node* temp = (node*)malloc(sizeof(node*));
    temp->data=a;
    if(x == 1) {
        temp->next=HEAD;
        HEAD=temp;
        return;
    }    
    
    node* temp1= HEAD;
    for(int i=0;i<x-2;i++) {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}

void printLL(node* HEAD) {
    node* temp= HEAD;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    printf("Hello World\n");
    node *head1, *head2;
    int n1,n2,val,pos;
    printf("Enter the size for the first Linked List:\n");
    scanf("%d",&n1);
    printf("Enter the size for the second Linked List:\n");
    scanf("%d",&n2);
    printf("Now enter the values and there postions for creating the 1st Linked List\n");
    for(int i=0;i<n1;i++) {
        printf("Iteration %d :Enter Vlaue and its postion:\n",i);
        scanf("%d %d",&val,&pos);
        insert(head1,val,pos);
    }
    printf("Now enter the values and there postions for creating the 2nd Linked List\n");
    for(int i=0;i<n2;i++) {
        printf("Iteration %d :Enter Vlaue and its postion:\n",i);
        scanf("%d %d",&val,&pos);
        insert(head2,val,pos);
    }
    printLL(head1);
    printLL(head2);
    //merge_LL_ALT(head1,head2);
    //printLL(head1);
    return 0;
}
