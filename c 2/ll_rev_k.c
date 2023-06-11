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
    
    if(head != NULL) 
        temp->next = *head;
    *head = temp;
}

node reverse(node head ,  int k) {
    node cur = head;
    node pre = NULL;
    node nxt = NULL;
    int i =0;
    while(cur != NULL && i<k) {
        nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
        i++;
    }
	/*
	Now nxt will point to (k+1)th node. So now nxt shall be again passed to the same function as the new "head".
	*/
    if(nxt != NULL)
        head->next = reverse(nxt,k);
    
    return pre;
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
    int n;
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        push(&head,arr[i]);
    }
    
    print(head);
    
    head = reverse(head, 3);
    
    print(head);
    free(arr);
}
