#include<stdio.h>
#include<stdlib.h>

struct stack 
{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack *s)
{
	if(s->top == -1)
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

void pushElement(struct stack *s, int num)
{
	if(isFull(s))
	{
		printf("Stack is Full.\n");
	}
	else
	{
		s->top++;
		s->arr[s->top] = num;
	}
}

int popElement(struct stack *s)
{
	if(s->top == -1)
	{
		printf("stack is Empty\n");
		return -1;
	}
	else
	{
		int val = s->arr[s->top];
		s->top--;

		return val;
	}
}

int main()
{	
	struct stack *s; //pointer to a structure
	s = (struct stack *)malloc(sizeof(struct stack));

	s->size = 6;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int));

	printf("%d\n", isEmpty(s));
	printf("%d\n", isFull(s));

	pushElement(s, 10);
	pushElement(s, 20);
	pushElement(s, 30);
	pushElement(s, 40);
	pushElement(s, 50);
	pushElement(s, 60);
	//pushElement(s, 70); // this elements can't be pushed inside the stack because stack is full.

	printf("element %d  popped from the stack\n", popElement(s));
	printf("element %d popped from the stack\n", popElement(s));
	printf("element %d popped from the stack\n", popElement(s));
	printf("element %d popped from the stack\n", popElement(s));
	printf("element %d popped from the stack\n", popElement(s));
	printf("element %d popped from the stack\n", popElement(s));

	printf("%d\n", isEmpty(s));
	printf("%d\n", isFull(s));

	return 0;
}