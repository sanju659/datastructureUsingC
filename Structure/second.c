#include<stdio.h>
#include<string.h>

struct employee
{
  char name[20];
  int code;
  float salary;
};

int main()
{
	struct employee e1, e2, e3;

	printf("Enter the name of the first employee: \n");
  scanf("%s", e1.name);
	printf("Enter the code of the first employee: \n");
	scanf("%d", &e1.code);
	printf("Enter the salary of the first employee: \n");
	scanf("%f", &e1.salary);

	printf("name of the first employee is: %s\n", e1.name);
	printf("The code of the first employee is: %d\n", e1.code);
	printf("The salary of the first employee is: %f\n\n", e1.salary);

	printf("Enter the name of the second employee: \n");
	scanf("%s", e2.name);
  printf("Enter the code of the second employee: \n");
	scanf("%d", &e2.code);
  printf("Enter the salary of the second employee: \n");
	scanf("%f", &e2.salary);
	
	printf("name of the second employee is: %s\n", e2.name);
	printf("The code of the second employee is: %d\n", e2.code);
	printf("The salary of the second employee is: %f\n\n", e2.salary);

	printf("Enter the name of the third employee: \n");
	scanf("%s", e3.name);
  printf("Enter the code of the third employee: \n");
	scanf("%d", &e3.code);
	printf("\nEnter the salary of the third employee: \n");
	scanf("%f", &e3.salary);
	
 	printf("name of the third employee is: %s\n", e3.name);
	printf("The code of the third employee is: %d\n", e3.code);
	printf("The salary of the third employee is: %f\n\n", e3.salary);

	return 0;
}