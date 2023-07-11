#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void linkedListTraverse(struct node *head)
{
	while (head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}

struct node *insertNodeAtIndex(struct node *head, int pos, int value)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));
	struct node *p = head;

	int i = 0;
	while (i < pos - 1)
	{
		p = p->next;
		i++;
	}

	ptr->data = value;
	ptr->next = p->next;
	p->next = ptr;

	return head;
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

	linkedListTraverse(head);
	head = insertNodeAtIndex(head, 2, 40);
	printf("\n");
	linkedListTraverse(head);

	return 0;
}