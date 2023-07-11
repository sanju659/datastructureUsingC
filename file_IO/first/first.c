	#include<stdio.h>

	int main()
	{
	FILE *ptr;
	int num, num2, num3;
	ptr = fopen("sample.txt", "r");
	if(ptr == NULL)
	{
	printf("File does not exist\n");
	}
	else
	{
	fscanf(ptr, "%d", &num);
	fscanf(ptr, "%d", &num2);
	fscanf(ptr, "%d", &num3);
	fclose(ptr);
	printf("The value of the number is: %d\n", num);
	printf("The value of the number is: %d\n", num2);
	printf("The value of the number is: %d\n", num3);
	}

	return 0;
	}