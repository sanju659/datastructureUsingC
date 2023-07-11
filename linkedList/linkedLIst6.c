#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

void traverseLinkedlist(struct node *first)
{
	while(first != NULL)
	{
		printf("%d  ",first->data);
		first = first->next;
	}
}

struct node *deleteElementsFirst(struct node *first)
{
	struct node *p = first;
	first = first->next;

	free(p);
	return first;
}

struct node *deleteElementAtIndex(struct node *first, int index)
{
	struct node *p = first;
	struct node *q = first->next;

	int i = 0;
	while(i < index - 1)
	{
		p = p->next;
		q = q->next;
		i++;
	}
	p->next = q->next;
	free(q);
	return first;
}

struct node *deleteAtLast(struct node *first)
{
	struct node *p = first;
	struct node *q = first->next;

	while (q->next != NULL)
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
	int chose, index;

	struct node *first = (struct node *)malloc(sizeof(struct node));
	struct node *second = (struct node *)malloc(sizeof(struct node));
	struct node *third = (struct node *)malloc(sizeof(struct node));
	struct node *fourth = (struct node *)malloc(sizeof(struct node));
	struct node *fifth = (struct node *)malloc(sizeof(struct node));
	first->data = 10;
	first->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = fourth;

	fourth->data = 40;
	fourth->next = fifth;

	fifth->data = 50;
	fifth->next = NULL;

	printf("Press 1 to see the linked list before any operation\n");
	printf("Press 2 to delete the first node\n");
	printf("Press 3 to delete the last node\n");
	printf("press 4 to delete element at a index\n");
	scanf("%d", &chose);

  	if(chose == 1)
  	{
  		printf("The Linked List before any operation.\n");
  		traverseLinkedlist(first);
  	}
  	else if(chose == 2)
  	{
  		printf("The Linked List before any operation.\n");
  		traverseLinkedlist(first);
  		printf("\n \n");

  		first = deleteElementsFirst(first);
  		printf("Linked list after deleting the first node\n");
  		traverseLinkedlist(first);
  	}
  	else if(chose == 3)
  	{
  		printf("The Linked List before any operation.\n");
  		traverseLinkedlist(first);
  		printf("\n \n");

  		first = deleteAtLast(first);
  		printf("Linked list after deleting the last node\n");
  		traverseLinkedlist(first);
  	}
  	else if(chose == 4)
  	{
  		printf("The Linked List before any operation.\n");
  		traverseLinkedlist(first);
  		printf("\n \n");

  		printf("Enter the index of the node which one you want to delete.\n");
  		scanf("%d", &index);
  		first = deleteElementAtIndex(first, index);
  		printf("Linked list after deleting node at index %d\n", index);
  		traverseLinkedlist(first);
  	}
  	else
  	{
  		printf("Galat switch daba dia vrmo.\n");
  	}

	return 0;
}