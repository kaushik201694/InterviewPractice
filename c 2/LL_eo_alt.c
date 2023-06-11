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
    
    if(head != NULL) {
        temp->next = *head;
        *head = temp;
    }
}

void fun1(node *head) {
    node cur = (*head);
    node nxt = (*head)->next;
    int a,b,c,d,e,f;
    
    if(cur->data %2 != 0) { 
        while(nxt->next != NULL) {
            a = cur->data;
            b = nxt->data;
            
            if(cur->data %2 != 0 && nxt->data %2 == 0) {
                cur = cur->next->next;
                nxt = nxt->next->next;
                continue;
            }
            else if(cur->data %2 == 0 && nxt->data %2 != 0) {
                cur->next = nxt->next;
                nxt->next = cur;
                c = cur->next->data;
                d = nxt->next->data;
                cur = cur->next;
                nxt = cur->next;
                e = cur->data;
                f = nxt->data;
                continue;
                
            }
        }
    }
    
    else if(cur->data %2 == 0) {
        while(nxt->next != NULL) {
            if(cur->data %2 == 0 && nxt->data %2 != 0) {
                cur = cur->next->next;
                nxt = nxt->next->next;
                continue;
            }
            else if(cur->data %2 != 0 && nxt->data %2 == 0) {
                cur->next = nxt->next;
                nxt->next = cur;
                cur = cur->next;
                nxt = cur->next;
                continue;
                
            }
        }
    }
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
    
    push(&head,80);
    push(&head,77);
    push(&head,55);
    push(&head,40);
    push(&head,20);
    push(&head,11);
    
    
    print(head);
    
    fun1(&head );        //Rearrange the LL with odd-even alternates
    
    print(head);
}