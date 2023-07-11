	#include<stdio.h>

	void traversal(int *arr, int size)
	{
		for(int i = 0; i < size; i++)
		{
			printf("%d\t", arr[i]);
		}
		printf("\n");
	}

	void bubbleShort(int *arr, int size)
	{
		int swap;
		for(int i = 0; i < size-1; i++)
		{
			for(int j = 0; j < size-1-i; j++)
			{
				if(arr[j] > arr[j+1])
				{
					swap = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = swap;
				}
			}
		}
	}

	int main()
	{
		int arr[10] = {32, 12, 2, 56, 29};
		int size = 5;

		traversal(arr, size);
		bubbleShort(arr, size);
		traversal(arr, size);
		return 0;
	}