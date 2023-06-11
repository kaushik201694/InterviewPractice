#include <stdio.h>
#include <stdlib.h>

typedef struct Node* node;
struct Node
{
    int data;
    node next;
};

void ReverseListK(node *head, int k)
{
    node cur = *head;
    node pre = NULL;
    node up = NULL;
    printf("cur2 data = %d\n", cur->data);
    node temp = cur;
    node temp2 = *head;
    
    int i=0,j=0;
    
    while(temp!= NULL)
    {
        if(i<k)
        {
            printf("HI i= %d\n", i);
            up = cur->next;
            cur->next = pre;
            pre = cur;
            cur = up;
            if(temp == (*head))
               {j=1;}
            printf("Temp data = %d\n", temp->data);
            temp = temp->next;
            printf("cur data = %d\n", cur->data);
            printf("Temp data = %d\n", temp->data);
            
            printf("up data = %d\n", up->data);
            printf("pre data = %d\n", pre->data);
            i++;
        }
        else{
            if(j == 1)
        {
            printf("IF Head data = %d\n", (*head)->data);
            *head = pre;
            printf("IF Head data = %d\n", (*head)->data);
            j=0;
        }
        temp2->next = cur;
        temp2 = cur;
        i=0;
        }
        
    }
    printf("\nHI END\n");
}

void ReverseList(node *head)
{
    node cur = *head;
    node pre = NULL;
    node up = NULL;
    
    while(cur !=NULL)
    {
        up = cur->next;
        cur->next = pre;
        pre = cur;
        cur = up;
    }
    *head = pre;
}


void PrintList(node head)
{
    node temp = head;
    while(temp!= NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void InsertNodeBack(node *head, int val)
{
    node temp = malloc(sizeof(node));
    temp->data = val;
    temp->next = NULL;
    
    if(*head == NULL)
    {
        *head = temp;
        return;
    }
    
    node temp2 = *head;
    while(temp2->next !=NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;   
}

int main()
{
    printf("Hello World\n");
    
    node head = NULL;
    InsertNodeBack(&head, 7);
    InsertNodeBack(&head, 47);
    InsertNodeBack(&head, 76);
    InsertNodeBack(&head, 23);
    InsertNodeBack(&head, 90);
    InsertNodeBack(&head, 13);
    InsertNodeBack(&head, 25);
    
    PrintList(head);
    
    ReverseList(&head);
    
    PrintList(head);
    ReverseListK(&head, 3);
    PrintList(head);

    return 0;
}
