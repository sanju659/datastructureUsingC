#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

 struct node *f = NULL;
 struct node *b = NULL;

void linkListTraversal(struct node *ptr)
{
	while(ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
}

void enqueue(int val)
{
	struct node *new = (struct node *)malloc(sizeof(struct node));

	if(new == NULL)
	{
		printf("Queue is Full.\n");
	}
	else
	{
		new->data = val;
		new->next = NULL;

		if(f == NULL){
			f = b = new; 
			//if the queue is empty.
		}else{
			b->next = new;
			b = new;
		}
	}
}

int dequeue()
{
	if(f == NULL)
	{
		printf("Queue is Empty.\n");
		return -1;
	}
	else
	{
		int val = f->data;
		f = f->next;
		return val;
	}
}

int main()
{
	enqueue(36);
	enqueue(47);
	enqueue(68);
	printf("Queue after the enqueue process.\n");
	linkListTraversal(f);

	printf("%d is dequeued from the queue.\n", dequeue());
	printf("Queue after the dequeue process.\n");
	linkListTraversal(f);

	return 0;
}