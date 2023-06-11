#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head;

void insert(int x) {
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data=x;
    if(head !=NULL)
        temp->next=head;
    else
        temp->next=NULL;
    head=temp;
}

void print() {
    struct node* temp= head;
    printf("The list created is :\n");
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main() {
    printf("Hello World\n");
    head=NULL;
    int n,x;
    printf("How many numbers?\n");
    scanf("%d",&n);
    for (int i;i<n;i++) {
        printf("Enter the number to be inserted\n");
        scanf("%d",&x);
        insert(x);
    }
    
    print(head);

    return 0;
}
