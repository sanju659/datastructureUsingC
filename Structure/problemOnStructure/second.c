#include<stdio.h>
struct complexNum
{
	int a;
	int b;
};

int main()
{
	struct complexNum com1, com2;

	printf("Enter the real part of the first complex number\n");
	scanf("%d", &com1.a);
	printf("Enter the imaginary part of the first complex number\n");
	scanf("%d", &com1.b);

	printf("Enter the real part of the second complex number\n");
	scanf("%d", &com2.a);
	printf("Enter the imaginary part of the second complex number\n");
	scanf("%d", &com2.b);

	printf("The first complex number is: %d + i%d\n", com1.a, com1.b);
	printf("The second complex number is: %d + i%d\n", com2.a, com2.b);

    return 0;
}