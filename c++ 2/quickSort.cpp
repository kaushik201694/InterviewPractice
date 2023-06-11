#include <iostream>

using namespace std;

int partition(int *arr, int start, int end)
{
	int pivot = arr[end];
	int pIndex = start;
	for (int i=start; i <= end-1; i++)
	{
		if(arr[i] <= pivot)
		{
			swap(arr[i], arr[pIndex]);
			pIndex++;
		}
	}
	swap(arr[pIndex], arr[end]);
	return pIndex;
}

void quicksort(int *arr, int start, int end)
{
	if(start < end)
	{
		int pIndex = partition(arr, start, end);
		quicksort(arr, start, pIndex-1);
		quicksort(arr, pIndex+1 ,end);
	}
}

int main()
{
    cout<<"Hello World"<<endl;
    int arr[] = {45,12,18,9,56,28,90,2};
    quicksort(arr, 0, 7);
    for(int i=0; i< 8; i++)
        cout<< arr[i] << " ";

    return 0;
}