#include<stdio.h>
#include<stdlib.h>

int main()
{
	float *ptr;
	int n, i;

	printf("Enter the number of elements you want to allocate memory for: \n");
	scanf("%d", &n);

	ptr = (float *) malloc (n * sizeof(float));

	printf("Enter %d number of elements: \t", n);
	for(i = 0; i < n; i++)
	{
		scanf("%f", &ptr[i]);
	}

	for(i = 0; i < n; i++)
	{
		printf("%f\t", ptr[i]);
	}

	return 0;
}