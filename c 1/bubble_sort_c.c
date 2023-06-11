BUBBLE SORT IN C
----------------------



#include <stdio.h>

int bubblesort(int *arr, int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}

void printarr(int *arr, int n)
{
    printf("\n The sorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    printf("Hello World\n");
    int arr[]={10,34,124,32,56,89,145};
    int n=(sizeof(arr)/sizeof(arr[0]));
    bubblesort(arr,n);
    printarr(arr,n);
    return 0;
}
