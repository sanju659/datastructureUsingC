#include<stdio.h>

struct vector
{
	int x;
	int y;
};

int main()
{
	struct vector v1, v2, result;

	v1.x = 5;
	v1.y = 10;
	printf("The dimension of x is: %d and y is: %d\n", v1.x, v1.y);
	v2.x = 10;
	v2.y = 10;
	printf("The dimension of x is: %d and y is: %d \n", v2.x, v2.y);

	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;

	printf("dimention of x is: %d and y is: %d\n", result.x, result.y);

	return 0;
}