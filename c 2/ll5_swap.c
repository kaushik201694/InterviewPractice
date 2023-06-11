#include <stdlib.h>
#include <stdio.h>

typedef struct NODE* node;

struct NODE {
    int data;
    node next;
};

void swap(node *head, int a, int b) {
    node curr_a = *(head);
    node prev_a = NULL;
    
    node curr_b = *(head);
    node prev_b = NULL;
    
    while(curr_a->data != a && curr_a != NULL) {
        prev_a = curr_a;
        curr_a = curr_a->next;
    }
    
    while(curr_b->data != b && curr_b != NULL) {
        prev_b = curr_b;
        curr_b = curr_b->next;
    }
    
    if(curr_a == NULL || curr_b == NULL) {
        printf("Element not found in the list\n");
        return;
    }
    
    // Changing "next" connections for the 2 given nodes to swap
    node temp = curr_a->next;
    curr_a->next = curr_b->next;
    curr_b->next = temp;
    
    // Changing "prev" connections for the 2 given nodes to swap
    if(prev_a != NULL)
        prev_a->next = curr_b;
    else
        *(head) = curr_b;
    
    if(prev_b != NULL)
        prev_b->next = curr_a;
    else
        *(head) = curr_a;
    

}

void push(node *head, int a) {
    node temp = malloc(sizeof(node));
    temp->data = a;
    temp->next = NULL;
    
    if(head != NULL)
        temp->next = *(head);
    
    *(head) = temp;
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
    printf("Enter the number of ELements you want to enter into the LL/Stack\n");
    scanf("%d",&n);
    printf("Now enter the numbers\n");
    int *arr = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        push(&head,arr[i]);
    }
    
    printf("Printing the basic LL\n");
    print(head);
    
    printf("Swapping procedure will begin\n");
    swap(&head, 34, 67);
    
    printf("Printing LL after element are swapped\n");
    print(head);
    
    free(arr);
    return 0;
}