#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	int rollNo;
	int fees;
};

int main()
{
	struct student arr[10];

	strcpy(arr[0].name, "Hagrid");
	arr[0].rollNo = 21;
	arr[0].fees = 3000;

	strcpy(arr[1].name, "Hermione");
	arr[1].rollNo = 23;
	arr[1].fees = 2000;

	strcpy(arr[2].name, "Dobby");
	arr[2].rollNo = 27;
	arr[2].fees = 5000;

	printf("name1: %s\n", arr[0].name);
	printf("rollNo: %d\n", arr[0].rollNo);
	printf("fees: %d ruppes\n", arr[0].fees);

	printf("name2: %s\n", arr[1].name);
	printf("rollNo: %d\n", arr[1].rollNo);
	printf("fees: %d ruppes\n", arr[1].fees);

	printf("name3: %s\n", arr[2].name);
	printf("rollNo: %d\n", arr[2].rollNo);
	printf("fees: %d ruppes\n", arr[2].fees);

	return 0;
}