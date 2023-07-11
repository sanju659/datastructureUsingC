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
	struct employee e1;

	strcpy(e1.name, "david");
	e1.code = 1;
	e1.salary = 123.453;

	printf("name: %s\n",e1.name);
	printf("code: %d\n", e1.code);
	printf("salary: %f\n", e1.salary);

	return 0;
}