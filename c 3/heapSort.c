#include <stdio.h>
#include <stdlib.h>

void maxHeapify(int* arr, int n, int i)
{
    printf("DEBUG 4 , i=%d\n", i);
    int largest = i;
    int left = 2*i +1;
    int right = 2*i +2;

    if(left>n && right >n)
        return;
    
    if(arr[left] > arr[largest])
    {
        largest = left;
    }

    if(arr[right] > arr[largest])
    {
        largest = right;
    }

    if(largest != i)
    {
        //swap the elements
        arr[i]^=arr[largest]^=arr[i]^=arr[largest];

        maxHeapify(arr, n, largest);
    }
}

void heapSort(int *arr ,int n)
{
    printf("DEBUG 2\n");
    int lastnonLeafNode = n/2 -1;
    
    for(int i= lastnonLeafNode; i>=0; i--)
    {
        printf("DEBUG 3, i=%d\n",i);
        maxHeapify(arr, n, i);
    }

    printf("AFTER max hepify\n");
    for(int i =0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i=n-1; i>=0;i--)
    {
        arr[i]^=arr[0]^=arr[i]^=arr[0];
        maxHeapify(arr, i, 0);
    }
    
}

int main()
{
    printf("DEBUG 1\n");
    int arr[] = {78, 34, 5, 1, 90, 34};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, n);
    printf("Will now print the heap sorted array:\n");
    for(int i =0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}