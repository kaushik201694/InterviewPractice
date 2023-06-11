#include<stdio.h>
#include <stdlib.h>

#define SIZE 20
typedef struct DataItem* dataItem;

struct DataItem
{
    int data;
    int key;
};

dataItem hashArray[SIZE];
dataItem item;


void insert(int key, int data)
{
    dataItem newItem = malloc(sizeof(dataItem));
    newItem->key = key;
    newItem->data = data;

    int hashIndex = key % SIZE;

    while(hashArray[hashIndex] != NULL)
    {
        ++hashIndex;
        hashIndex %= SIZE;
    }
    hashArray[hashIndex] = newItem;
}

void printHT()
{
    for(int i=0; i<SIZE; i++)
    {
        if(hashArray[i] != NULL)
            printf("%d --> %d", hashArray[i]->key, hashArray[i]->data);
        else
            printf("~ --> ~");
        
        printf("\n");
    }
    printf("\n");
}

int main()
{
    insert(1, 20);
    insert(2, 70);
    insert(42, 80);
    insert(4, 25);
    insert(12, 44);
    insert(2, 32);
    insert(17, 11);
    insert(13, 78);
    insert(37, 97);

    printHT();


    return 0;
}

