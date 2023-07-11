#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr = fopen("sample.txt", "r");
	float x, y, sum, diff, mul, div, rem;

	fscanf(ptr, "%f", &x);
	fscanf(ptr, "%f", &y);
	fclose(ptr);

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;
	// rem = x % y;

	printf("The first number in the file is: %f\n", x);
	printf("The second number in the file is: %f\n", y);

	printf("Sum of the two numbers is: %f\n", sum);
	printf("Difference of two numbers is: %f\n", diff);
	printf("Multiplication of two numbers is: %f\n", mul);
	printf("Divition of two number is: %f\n", div);
	// printf("Remainder obtained after divition: %f\n", rem);

	return 0;
}