#include<stdio.h>

int main()
{
	int arr1[10], i, *point, num, *arr2[10];

	printf("Enter number of elements you want in your array: \n");
	scanf("%d", &num);

	printf("Enter array elements: \n");
	for(i = 0; i < num; i++)
	{
	  scanf("%d", &arr1[i]);
	}

	// printf("Array elements address are: \n");
	// for(i = 0; i < num; i++)
	// {
	// 	point = &arr1[i];
	//   printf("%d\n", point);
	// }

	for(i = 0; i < num; i++)
	{   
		point = &arr1[i];
		arr2[i] = point;
	}
	printf("Addresses are: \n");
	for(i = 0; i < num; i++)
	{   
		printf("%d\n", arr2[i]);
	}

	return 0;
}