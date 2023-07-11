#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int n, i;

	printf("Enter the number of elements you want to allocate in heap: \n");
	scanf("%d", &n);

	ptr = (int *) calloc (n, sizeof(int));
	
	printf("Enter %d elements: \n", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &ptr[i]);
	}

	printf("Your elements are: \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n", ptr[i]);
	}

	return 0;
}