#include<stdio.h>

int binarySearch(int arr[], int size, int element)
{   int low = 0;
	int high = size-1;
	int mid;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(arr[mid] == element)
		{
			return mid;
		}
		if(arr[mid] < element)
		{
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int arr[15] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int size;
	size = sizeof(arr) / sizeof(int);
	int element = 10;
	int result;

	result = binarySearch( arr,  size,  element);

	if(result != -1)
	{
		printf("Your element found at the index: %d", result);
	}
	else
	{
		printf("Element not found");
	}

	return 0;

}