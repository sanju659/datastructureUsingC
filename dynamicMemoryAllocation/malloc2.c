#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr; // this is a pointer to a integer
	int n, i;

	printf("Enter the number of elements you want to allocate memory for: \n");
	scanf("%d", &n);

	ptr = (int *) malloc (n * sizeof(int));

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