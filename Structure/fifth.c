	#include<stdio.h>
	#include<string.h>
	struct employee{
	char name[20];
	int code;
	int salary;
	};

	int main(){
	struct employee e1;
	struct employee *ptr; //we are declairing a pointer to a structure
	ptr = &e1;

	strcpy((ptr)->name, "Max");
	// (*ptr).code = 102;
	(ptr)->code = 100;
	(ptr)->salary = 400;
	// printf("%s\n", (*ptr).name);
	// printf("%d\n", (*ptr).code);
	// printf("%d\n", (*ptr).salary);
	printf("%s\n", e1.name);
	printf("%d\n", e1.code);
	printf("%d\n", e1.salary);
	
	return 0;
	}