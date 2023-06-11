#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
typedef struct HASHMAP
{
    int key;
    int value;
}hashmap;

hashmap *h_array[SIZE];

void insert(int a, int b)
{
    hashmap *temp = malloc(sizeof(hashmap));
    temp->key = a;
    temp->value = b;
    
    int hashIndex = a%SIZE;
    while(h_array[hashIndex] != NULL)
    {
        ++hashIndex;
    }
    h_array[hashIndex] = temp;
}

int *two_sum(int* arr, int size, int target)
{
    int *res = calloc(2, sizeof(int));
    for(int i=0; i<size;i++)
    {
        if(h_array[target - arr[i]] == NULL)
        {
            insert(arr[i], i);
        }
        else
        {
        res[0] = h_array[target-arr[i]]->value;
        res[1] = i;
        break;
        }
    }
    return res;
    
}

int main()
{
    int arr[] = {8, 3, 7,14,9,4,12};
    int target = 18;
    int size = sizeof(arr)/ sizeof(arr[0]);
    printf("size = %d\n", size);
    
    int *res = two_sum(arr, size, target);
    printf("The result is: %d, %d", res[0], res[1]);
    return 0;
}
