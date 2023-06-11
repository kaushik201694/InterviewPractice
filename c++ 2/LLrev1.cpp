#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node *tail = NULL;

void push_back(Node **head, int a) {
    Node *temp = new Node();
    temp->data = a;
    temp->next = NULL;
    
    if(*(head) == NULL)
    {
        *(head) = temp;
        tail = temp;
        return;
    }
    
    tail->next = temp;
    tail = temp;
}

void reverse(Node **head) {
    Node *pre = NULL;
    Node *nxt = NULL;
    Node *cur = *head;
    
    while(cur != NULL) {
        nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }
    *head = pre;
}

void print(Node *head) {
    while(head != NULL) {
        cout<< head->data<< " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    push_back(&head, 7);
    push_back(&head, 4);
    push_back(&head, 8);
    push_back(&head, 90);
    push_back(&head, 21);
    push_back(&head, 67);
    push_back(&head, 32);
    push_back(&head, 84);
    
    print(head);
    
    reverse(&head);
    
    print(head);
    
    return 0;
}