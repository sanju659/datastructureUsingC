#include<stdio.h>
int main()
{
	FILE *ptr;
	int num = 271;
	ptr = fopen("sample.txt", "w");
	fprintf(ptr, "The number is: %d\n", num);
	fprintf(ptr, "This is Peter Parker\n");
	fclose(ptr);

	return 0;
}