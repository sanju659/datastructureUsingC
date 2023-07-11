#include<stdio.h>
#include<stdlib.h>

struct stack 
{
	int size;
	int top;
	int *arr;
};

void pushElement(struct stack *sp, int value)
{
	if(sp->top == sp->size - 1)
	{
		printf("stack is full.\n");
	}
	else
	{
		sp->top++;
		sp->arr[sp->top] = value;
	}
}

int popElement(struct stack *sp)
{
	if(sp->top == -1)
	{
		printf("Stack is Empty.\n");
		return -1;
	}
	else
	{
		int value = sp->arr[sp->top];
		sp->top--;
		return value;
	} 
}

int peekElements(struct stack *sp, int i)
{
	if(sp->top-i+1 < 0)
	{
		printf("Invalid Operation. \n");
		return -1;
	}
	else
	{
		return sp->arr[sp->top-i+1];
	}
}

int main()
{	int num, value, pop;
	struct stack *sp = (struct stack *)malloc(sizeof(struct stack));

	sp->size = 5;
	sp->top = -1;
	sp->arr = (int *)malloc(sp->size * sizeof(int));


	printf("How many element you want to push in the stack not more than %d.\n", sp->size);
	scanf("%d", &num);

	if(num > sp->size){
		printf("Can not insert elements more than %d\n", sp->size);
	}
	else
{
		printf("Please push %d elements\n", num);
		for(int i = 0; i < num && num <= sp->size; i++)
	{
		scanf("%d", &value);
		pushElement(sp, value);
	}
}

	for(int i = 1; i <= sp->top+1; i++)
	{
		printf("Element at position %d is: %d\n", i, peekElements(sp, i));
	}

	printf("How many element you want to pop there are %d elements\n", sp->top+1);
	scanf("%d", &pop);
	if(pop > sp->top+1)
	{
		printf("There are not %d elements available.\n", pop);
	}
	else
	{
		printf("%d elements will be popped from the stack.\n", pop);
		
		for(int i = 0; i < pop; i++)
	{
		printf("%d is popped from the  stack\n", popElement(sp));
	}
	}
	printf("Elements after you popped %d elements from stack\n", pop);
	for(int i = 1; i <= sp->top+1; i++)
	{
		printf("Element at position %d is: %d\n", i, peekElements(sp, i));
	}
	return 0;
}