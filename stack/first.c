#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack *s)
{
	if (s->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(struct stack *s)
{
	if(s->top == s->size - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	struct stack *s;
	s = (struct stack *)malloc(sizeof(struct stack)); // Allocate memory for s

	s->size = 5;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int));


	s->arr[0] = 10;
	s->top++; // top = 0

	s->arr[1] = 20;
	s->top++; //top = 1

	s->arr[2] = 30;
	s->top++; //top = 2

	s->arr[3] = 40;
	s->top++; //top = 3

	s->arr[4] = 50;
	s->top++; // top = 4

	if (isEmpty(s))
	{
		printf("stack is Empty.");
	}

	if(isFull(s))
	{
		printf("Stack is full.");
	}

	 free(s->arr); 
	 free(s); 

	return 0;
}
