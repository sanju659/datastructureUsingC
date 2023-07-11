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

struct node *addElementsFirst(struct node *first, int num)
{
	struct node *n = (struct node *)malloc(sizeof(struct node));
	struct node *p = first;
	n->data = num;
	n->next = p;
	return n;
}

struct node *addElementAtIndex(struct node *first, int indx, int num)
{
	struct node *n = (struct node *)malloc(sizeof(struct node));
	struct node *p = first;

	int i = 0;
	while(i < indx - 1)
	{
		p = p->next;
		i++;
	}

	n->data = num;
	n->next = p->next;
	p->next = n;
	return first;
}

struct node *addElementsLast(struct node *first, int num)
{
	struct node *n = (struct node *)malloc(sizeof(struct node));
	struct node *p = first;

	while(p->next != NULL)
	{
		p = p->next;
	}

	n->data = num;
	n->next = p->next;
	p->next = n;

	return first;
}

int main()
{	int chose, num, index;

	struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

	first->data = 10;
	first->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = fourth;

	fourth->data = 40;
	fourth->next = NULL;

	printf("Enter 1 to traverse the linked list.\n");
	printf("Enter 2 to insert a node at begining & Traverse.\n");
	printf("Enter 3 to insert a node at Last & Traverse.\n");
	printf("Enter 4 to insert a node at a index & Traverse.\n");
	scanf("%d", &chose);

	if(chose == 1)
	{	
		printf("Your Linked list before any operation\n");
		traverseLinkedlist(first);
	}
	else if(chose == 2)
	{
		printf("Your Linked list before any operation\n");
		traverseLinkedlist(first);
		
		printf("\n\n");
		printf("Enter the value you want as a first element in the linked list.\n");
		scanf("%d", &num);
		first = addElementsFirst(first, num);
		printf("Your Linked list after inserting %d in the linked List\n", num);
		traverseLinkedlist(first);
	}
	else if(chose == 3)
	{
		printf("Your Linked list before any operation\n");
		traverseLinkedlist(first);
		printf("\n\n");
		printf("Enter the value you want as a last element in the linked list.\n");
		scanf("%d", &num);
		first = addElementsLast(first, num);
		printf("Your Linked list after inserting %d in the linked List\n", num);
		traverseLinkedlist(first);
	}
	else if(chose == 4)
	{
		printf("Your Linked list before any operation\n");
		traverseLinkedlist(first);
		printf("\n\n");
		printf("Enter the index in which you want to insert the node Except the first index.\n");
		scanf("%d", &index);
		printf("Enter the value you want as the value of the node.\n");
		scanf("%d", &num);
		first = addElementAtIndex(first, index, num);
		printf("Your Linked list after inserting %d in the linked List at index %d\n", num, index);
		traverseLinkedlist(first);
	}
	else
	{
		printf("Error\n");
	}

	return 0;
}