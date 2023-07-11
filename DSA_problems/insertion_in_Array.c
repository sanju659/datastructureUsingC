		#include<stdio.h>

		void traversal(int arr[10], int size)
		{
		 printf("The array elements are: \n");
		 for(int i = 0; i < size; i++)
		 {
		 	printf("%d\n", arr[i]);
		 }

		}

		int insertionElement(int arr[10], int size, int element,int index)
		{
		 if(index >= size)
		 {
		 	return -1;
		 }
		 else
		 {
		 	for(int i = size - 1; i >= index; i--)
		 	{
		 		arr[i+1] = arr[i];
		 	}
		 	arr[index] = element;
		 	return 1;
		 }
		}

		int main()
		{
			int arr[10];
			int i;
			int size = 5;
			int element;
			int index;

			printf("enter the array elements: ");
			for(i = 0; i < size; i++)
			{
				scanf("%d", &arr[i]);
			}

			traversal(arr, size);
			printf("enter the element you want to insert in the array\n");
			scanf("%d", &element);
			printf("enter the index where you want to insert %d\n", element);
			scanf("%d", &index);
			insertionElement(arr, size, element, index);
			size = size + 1;
			traversal(arr, size);
		return 0;
		}