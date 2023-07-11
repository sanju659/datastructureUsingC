#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void linkedListTraverse(struct node *head) // some confusion here
{
	while (head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}

int linkedListSize(struct node *head) // some confusion here
{
	int size = 0;
	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	return size;
}

int main()
{
	int size;
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

	linkedListTraverse(head);
	size = linkedListSize(head);
	printf("Number of node in the linked list: %d\n", size);

	return 0;
}