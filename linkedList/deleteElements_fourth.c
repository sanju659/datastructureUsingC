#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *next;
};

void linkListTraversal(struct node *first)
{
	while (first != NULL)
	{
		printf("Value: %d\n", first->value);
		first = first->next;
	}
}

// struct node *deleteElementAtFirst(struct node *first)
// {
// 	struct node *p = first;
// 	first = first->next;
// 	free(p);
// 	return first;
// }

struct node *deleteElementAtIndex(struct node *first, int index)
{
	struct node *p = first;
	struct node *q = first->next;

	int i = 0;
	while (i < index - 1)
	{
		p = p->next;
		q = q->next;
		i++;
	}

	p->next = q->next;
	free(q);
	return first;
}

int main()
{
	struct node *first = (struct node *)malloc(sizeof(struct node));
	struct node *second = (struct node *)malloc(sizeof(struct node));
	struct node *third = (struct node *)malloc(sizeof(struct node));
	struct node *fourth = (struct node *)malloc(sizeof(struct node));
	struct node *fifth = (struct node *)malloc(sizeof(struct node));

	first->value = 46;
	first->next = second;

	second->value = 78;
	second->next = third;

	third->value = 35;
	third->next = fourth;

	fourth->value = 52;
	fourth->next = fifth;

	fifth->value = 69;
	fifth->next = NULL;

	printf("Elements before deletion: \n");
	linkListTraversal(first);
	// first = deleteElementAtFirst(first);
	// printf("\n");
	// linkListTraversal(first);
	first = deleteElementAtIndex(first, 2);
	printf("Elements after deletion: \n");
	linkListTraversal(first);

	free(first);
	free(second);
	free(third);
	free(fourth);
	free(fifth);
	return 0;
}