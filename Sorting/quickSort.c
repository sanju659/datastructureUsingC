#include<stdio.h>

void arrTraversal(int *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

int partition(int *arr, int low, int high)
{
	int pivot = arr[low];
	int i = low + 1;
	int j = high;
	int temp, swap;

	do {
		while(arr[i] < pivot){
			i++;
		}

		while(arr[j] > pivot){
			j--;
		}

		if(i < j){
		   swap = arr[i];
		   arr[i] = arr[j];
		   arr[j] = swap;
		}

	}while(i < j);

	temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	return j;
}

void quickSort(int *arr, int low, int high)
{
	int indexAfterPartition; //index of pivot after the partition is made

	if(low < high)
	{
	  int indexAfterPartition = partition(arr, low, high);
	  quickSort(arr, low, indexAfterPartition - 1); //sort the left sub array
	  quickSort(arr, indexAfterPartition + 1, high); // sort the right sub array
	}
}

int main()
{	
	//			  0   1   2   3   4   5   6   7
	int arr[8] = {8, 7, 6, 5, 4, 3, 2, 1};
	// 06, 11, 21, 23, 26, 32, 45, 57
	int size = sizeof(arr)/sizeof(int);

	printf("Input array\n");
	arrTraversal(arr, size);
	quickSort(arr, 0, size-1);
	printf("Sorted output array\n");
	arrTraversal(arr, size);
	return 0;
}