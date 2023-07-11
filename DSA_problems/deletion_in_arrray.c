	#include<stdio.h>

	void arrTraversal(int *arr, int size)
	{
		for(int i = 0; i < size; i++)
		{
			printf("%d\n", arr[i]);
		}
		printf("\n");
	}

	void deletionElement(int *arr, int size, int index)
	{
		if(index >= size)
		{
			printf("Sorry I can't perform the operation");
		}
		else
		{
			for (int i = index; i < size - 1; i++)
			{
				arr[i] = arr[i+1];
			}
		}
	}

	int main()
	{
		int arr[10] = {20, 72, 33, 14, 45};
		int size = 5;
		int index = 2;

		arrTraversal(arr, size);
		deletionElement(arr, size, index);
		size = size - 1;
		arrTraversal(arr, size);
		return 0;
	}