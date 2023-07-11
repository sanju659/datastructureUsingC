#include<stdio.h>
int main()
{
	int a[5];
	int *p;

	printf("enter array elements: \n");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	// p = &a[0];
	// printf("%p\t", p);
	// printf("%p\t", a);

	printf("Address of the elements are: \n");
	for (int i = 0; i < 5; i++)
	{	
		p = &a[i];
		printf("Address of a[%d] is: %d \n", i,*p);
		printf("Address of a[%d] is: %p \n", i,p);
	}



return 0;	
}