#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void *traverseLinkedlist(struct node *first)
{
	while (first != NULL)
	{
		printf("%d\n", first->data);
		first = first->next;
	}
}

/*struct node *deleteAtFirst(struct node *first)
{	struct node *p = first;
	first = first->next;
	free(p);
	return first;
}*/

/*struct node *deleteElementAtIndex(struct node *first, int index)
{
	struct node *p = first;
	struct node *q = first->next;
	int i = 0;
	while(i != index - 1)
	{
		p = p->next;
		q = q->next;
		i++;
	}
	p->next = q->next;
	free(q);
	return first;
}*/

/*struct node *deleteAtLast(struct node *first)
{
	struct node *p = first;
	struct node *q = first->next;
	while(q->next != NULL)
	{
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return first;
}*/

struct node *deletionUsingValue(struct node *first, int value)
{
	struct node *p = first;
	struct node *q = first->next;

	while (q->data != value && q->next != NULL)
	{
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return first;
}

int main()
{
	struct node *first, *second, *third, *fourth;

	first = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));

	first->data = 89;
	first->next = second;

	second->data = 40;
	second->next = third;

	third->data = 30;
	third->next = fourth;

	fourth->data = 10;
	fourth->next = NULL;

	printf("Linked list before the deletion operation: \n");
	traverseLinkedlist(first);

	// printf("Linked list after the deletion operation: \n");
	// first = deleteAtFirst(first);
	// traverseLinkedlist(first);

	// printf("Linked list after the deletion operation: \n");
	// first = deleteElementAtIndex(first, 2);
	// traverseLinkedlist(first);

	// printf("Linked list after the deletion operation: \n");
	// first = deleteAtLast(first);
	// traverseLinkedlist(first);

	printf("Linked list after the deletion operation: \n");
	first = deletionUsingValue(first, 10);
	traverseLinkedlist(first);

	return 0;
}