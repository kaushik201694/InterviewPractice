#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *head = NULL;
node *tail = NULL;

node *deleteNthNodeFromEnd(int n)
{
    if(n == 0)
        return head;
    node *fast  = head;
	node *slow = head;
	
	for(int i=0; i<n; i++)
	{
		fast = fast->next;
	}	
	if(fast->next == NULL)
		return head->next;
	while(fast->next)
	{
		fast  = fast->next;
		slow = slow->next;
	}
	node *temp = slow->next;
	slow->next = slow->next->next;
	free(temp);
    return head;
}

void insert_back(int a)
{
    node *temp = malloc(sizeof(node));
    temp ->data = a;
    temp->next = NULL;

    if(!head && !tail)
    {
        head = temp;
        tail = temp;
        return;
    }

    tail->next = temp;
    tail = temp;
}

void print()
{
    node *temp = head;
    while(temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    insert_back(78);
    insert_back(56);
    insert_back(34);
    insert_back(90);
    insert_back(19);
    insert_back(45);
    insert_back(92);
    insert_back(5);
    insert_back(87);
    insert_back(23);
    print();
    head = deleteNthNodeFromEnd(0);
    print();

    return 0;
}