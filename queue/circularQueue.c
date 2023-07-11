#include<stdio.h>
#include<stdlib.h>

struct circularQueue
{	
	int size;
	int f;
	int b;
	int *arr;
};

int isEmpty(struct circularQueue *sp)
{
	if(sp->b == sp->f)
	{
		return 1;
	}
	return 0;
}

int isFull(struct circularQueue *sp)
{
    if (((sp->b) + 1) % sp->size == sp->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *sp, int val)
{
	if(isFull(sp))
	{
		printf("Queue is Full, cannot insert value: %d\n", val);
	}
	else
	{		
		sp->b = (((sp->b) + 1) % sp->size);
		sp->arr[sp->b] = val;
		printf("Successfully Enqueued %d to the Queue.\n", sp->arr[sp->b]);
	}
}

int dequeue(struct circularQueue *sp)
{	int val;
	if(isEmpty(sp))
	{
		printf("Queue is empty, could not dequeue.\n");
		return 0;
	}
	else
	{
		sp->f = (((sp->f) + 1) % sp->size);
		val = sp->arr[sp->f];
		return val;
	}
}

int main()
{
	struct circularQueue *sp;
	sp = (struct circularQueue *)malloc(sizeof(struct circularQueue));

	sp->size = 6;
	sp->f = 0;
	sp->b = 0;
	sp->arr = (int *)malloc(sp->size * sizeof(int));

	enqueue(sp, 15);
	enqueue(sp, 121);
	enqueue(sp, 38);
	enqueue(sp, 47);
	enqueue(sp, 98);
	enqueue(sp, 35);

	printf("\n");
	printf("%d is dequeued from the Queue.\n", dequeue(sp));
	printf("%d is dequeued from the Queue.\n", dequeue(sp));
	printf("%d is dequeued from the Queue.\n", dequeue(sp));
	printf("%d is dequeued from the Queue.\n", dequeue(sp));
	printf("%d is dequeued from the Queue.\n", dequeue(sp));
	printf("%d is dequeued from the Queue.\n", dequeue(sp));

	printf("\n");
	enqueue(sp, 98);
	enqueue(sp, 35);

	free(sp);
	free(sp->arr);
	return 0;
}