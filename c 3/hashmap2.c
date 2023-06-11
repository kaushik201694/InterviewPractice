#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 26

typedef struct HashMP* hm;
struct HashMP
{
    char key;
    int value;
};

hm hashArray[SIZE];

void insertHashItem(char ch, int val)
{
    int hashIndex = ((int)ch)%SIZE;
    
    if(hashArray[hashIndex] != NULL)
    {
        hashArray[hashIndex]->value++;
        return;
    }
        
    hm newItem = malloc(sizeof(hm));
    newItem->key = ch;
    newItem->value = val;
    
    hashArray[hashIndex] = newItem;    
    
}

void printHT()
{
    for(int i=0; i<SIZE; i++)
    {
        if(hashArray[i] != NULL)
            printf("%c --> %d", hashArray[i]->key, hashArray[i]->value);
        else
            printf("~ --> ~");
        
        printf("\n");
    }
    printf("\n");
}

int main()
{
    printf("Hello World\n");
    
    char *s = malloc(20*sizeof(char));
    
    strcpy(s, "kaushik");
    
    int n = strlen(s);
    
    for(int i=0; i<n; i++)
    {
        insertHashItem(s[i], 1);
    }
    
    printHT();
    
    free(s);
    return 0;
}
