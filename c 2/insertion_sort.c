#include<stdio.h>

void ins_sort(int arr[] ,int n)
{
    int i,temp,d;
    for(i=1;i<n;i++)
    {
        d=i;
        while(d>0 && arr[d-1] > arr[d])
        {
            temp=arr[d];
            arr[d]=arr[d-1];
            arr[d-1]=temp;
            d--;
        }
    }
}

void print_arr(int arr[],int n)
{
    int i;
    printf("\nThe sorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main() {
    int arr[]={12,11,13,5,6,57,3};
    int n=(sizeof(arr))/(sizeof(arr[0]));
    ins_sort(arr,n);
    print_arr(arr,n);
    return 0;
}
