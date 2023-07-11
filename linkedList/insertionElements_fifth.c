#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void linkedListTraversal(struct node *first)
{
	while (first != NULL)
	{
		printf("the value: %d\n", first->data);
		first = first->next;
	}
}

struct node *insertAtFirst(struct node *first, int num)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));

	ptr->data = num;
	ptr->next = first;

	return ptr;
}

struct node *insertAtIndex(struct node *first, int num, int index)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));

	struct node *p = first;

	for (int i = 0; i < index - 1; i++)
	{
		p = p->next;
	}
	ptr->data = num;
	ptr->next = p->next;
	p->next = ptr;

	return first;
}

struct node *insertAfterNode(struct node *first, struct node *specNode, int num)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));

	ptr->data = num;
	ptr->next = specNode->next;
	specNode->next = ptr;
	return first;
}

// struct node *insertBeforeNode(struct node *first, struct node *specNode, int num)
// {
// 	struct node *ptr;
// 	ptr = (struct node *)malloc(sizeof(struct node));

// 	ptr->data = num;
// 	ptr->next = specNode;
// 	first->next = ptr;
// 	return first;
// }

struct node *insertAtLast(struct node *first, int num)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));

	struct node *p = first;

	while (p->next != NULL)
	{
		p = p->next;
	}
	ptr->data = num;
	ptr->next = NULL;
	p->next = ptr;

	return first;
}

int main()
{
	struct node *first, *second, *third;

	first = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));

	first->data = 29;
	first->next = second;

	second->data = 36;
	second->next = third;

	third->data = 72;
	third->next = NULL;

	// printf("The value of null %u", third->next);
	printf("Linked list before insertion\n");
	linkedListTraversal(first);

	// first = insertAtIndex(first, 84, 1);

	// first = insertAtFirst(first, 89);
	// printf("\n");

	// first = insertAtLast(first, 52);

	first = insertAfterNode(first, third, 0);

	printf("\nLinked list after insertion\n");
	linkedListTraversal(first);

	return 0;
}