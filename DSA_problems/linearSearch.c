	#include<stdio.h>

	int linearSearch(int arr[], int size, int element)
	{	int i = 0;
		while(i < size)
		{
			if(arr[i] == element)
			{
				return i;
			}
			i++;
		}
		return -1;
	}

	int main()
	{
		int arr[10] = {13, 24, 23, 74, 95, 64, 71, 48, 79, 104};
		int size;
		size = sizeof(arr) / sizeof(int);
		int result;
		int element = 23;

		result = linearSearch(arr, size, element);

		printf("your element found at the index: %d", result);
		return 0;
	}