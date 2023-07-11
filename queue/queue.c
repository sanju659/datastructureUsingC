#include<stdio.h>
#include<stdlib.h>

struct queue
{
	int size;
	int b;
	int f;
	int *arr;
};

int isEmpty(struct queue *sp)
{
	if(sp->b == sp->f)
	{
		return 1;
	}
	return 0;
}

int isFull(struct queue *sp)
{
	if(sp->b == sp->size-1)
	{
		return 1;
	}
	return 0;
}

void enqueue(struct queue *sp, int val)
{
	if(isFull(sp))
	{
		printf("Queue is Full.\n ");
	}
	else
	{
		sp->b++;
		sp->arr[sp->b] = val;
		printf("%d\n", sp->arr[sp->b]);
	}
}	
	
int dequeue(struct queue *sp)
{
	if(isEmpty(sp))
	{
		printf("Queue is empty.\n");
		return -1;
	}
	else
	{
		sp->f++;
		int val = sp->arr[sp->f];
		return val;
	}		
}

int main()
{
	struct queue *sp;
	sp = (struct queue *)malloc(sizeof(struct queue));

	sp->size = 5;
	sp->b = -1;
	sp->f = -1;
	sp->arr = (int *)malloc(sp->size * sizeof(int));

	// printf("Values after enqueue: \n");
	enqueue(sp, 8);
	enqueue(sp, 34);
	enqueue(sp, 92);

	printf("%d is dequeued from the queue.\n", dequeue(sp));
	printf("%d is dequeued from the queue.\n", dequeue(sp));
	printf("%d is dequeued from the queue.\n", dequeue(sp));
	printf("%d is dequeued from the queue.\n", dequeue(sp));

	return 0;
}