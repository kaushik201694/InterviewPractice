#include <stdio.h>
#include <stdlib.h>

void Heapify(int *arr, int n, int i)
{
    int largestIndex = i;
    int leftChildIndex = 2*i +1;
    int rightChildIndex = 2*i +2;

    if(arr[leftChildIndex] > arr[largestIndex] && leftChildIndex < n)
        largestIndex = leftChildIndex;
    if(arr[rightChildIndex] > arr[largestIndex] && rightChildIndex < n)
        largestIndex = rightChildIndex;
    
    if(largestIndex != i)
    {
        arr[i]^=arr[largestIndex]^=arr[i]^=arr[largestIndex];

        Heapify(arr, n, largestIndex);
    }
}

void BuildHeap(int *arr, int n)
{
    int lastNonLeafNode = (n/2)-1;
    
    for(int i= lastNonLeafNode; i>=0; i--)
    {
        Heapify(arr, n ,i);
    }
}

void PrintArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

int main()
{
    int arr[] = {23, 12, 49, 92, 84, 65, 31, 56, 22, 94};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The Array is:");
    PrintArray(arr, n);

    BuildHeap(arr,n);
    printf("\nArray Repesentation of the heap is:");
    PrintArray(arr,n);

    return 0;
}