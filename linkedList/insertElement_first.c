#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void traversalOfElements(struct node *head)
{
	while (head != NULL)
	{
		printf("%d\t", head->data);
		head = head->next;
	}
}

struct node *addElementFirst(struct node *head, int n)
{
	struct node *heir;

	heir = (struct node *)malloc(sizeof(struct node));

	heir->data = n;
	heir->next = head;

	return heir;
}

int main()
{
	struct node *head;
	struct node *second;
	struct node *third;

	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));

	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = NULL;

	traversalOfElements(head);
	head = addElementFirst(head, 67);
	printf("\n");
	traversalOfElements(head);

	return 0;
}