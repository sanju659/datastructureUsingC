#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

struct node *top = NULL;

int isEmpty(struct node *ptr)
{
	if(ptr == NULL)
	{
		return 1;
	}
	return 0;
}

int isFull()
{	struct node *n = (struct node *)malloc(sizeof(struct node));
	if(n == NULL)
	{
		return 1;
	}
	return 0;
}

struct node *traverseElement(struct node *ptr)
{
	while(ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
}

struct node *push(struct node *ptr, int num)
{
	if(isFull())
	{
		printf("stack over flow.\n");
	}
	else
	{
		struct node *n = (struct node *)malloc(sizeof(struct node));
		n->data = num;
		n->next = ptr; //storing the value of top
		ptr = n; //updating the top
		return ptr;
	}
}

int pop(struct node *ptr)
{
	if(isEmpty(ptr))
	{
		printf("stack under flow\n");
	}
	else
	{
		struct node *n = ptr;
		top = ptr->next; //this is the real top
		int x = n->data;
		free(n);
		return x;
	}
}

int peekElement(int pos, struct node *ptr)
{
	struct node *n = ptr; // (ptr = top)

	for(int i = 0; (i < pos - 1 && n != NULL); i++)
	{
		n = n->next;
	}

	if(n != NULL)
	{
		return n->data;
	}else{
		return -1;
	}
}

int main()
{
	// printf("%d\n", isEmpty(top));
	// printf("%d\n", isFull());

	top = push(top, 10);
	top = push(top, 20);
	top = push(top, 30);

	// printf("stack before the pop operation.\n");
	// traverseElement(top);
	// printf("\n");

	// printf("%d is poped from the stack\n", pop(top));
	// printf("\n");
	// printf("stack after pop operation.\n");
	// traverseElement(top);

	printf("Values after peek operation.\n");
	for(int i = 1; i <= 3; i++)
	{
		printf("Element at position: %d is %d\n", i, peekElement(i, top));
	}

	return 0;
}