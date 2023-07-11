#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int n, i;
	printf("Number of elements you wnat to allocate: \n");
	scanf("%d", &n);

	ptr = (int *) malloc (n * sizeof(int));

	printf("Enter %d elements: \n", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &ptr[i]);
	}

	printf("your elements are: \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n", ptr[i]);
	}

	printf("Enter number of elements you want to insert after reallocation\n");
	scanf("%d", &n);

	ptr = realloc(ptr, n * sizeof(int));

	printf("Enter %d elements: \n", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &ptr[i]);
	}
	printf("your elements are: \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n", ptr[i]);
	}

	free(ptr);

	return 0;
}