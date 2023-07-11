#include<stdio.h>
#include<stdlib.h>

struct stack 
{
 int size;
 int top;
 int *arr;
};

int isFull(struct stack *s)
{
	if(s->top == s->size - 1)
	{
		return 1;
	}
}

int isEmpty(struct stack *s)
{
	if(s->top == -1)
	{
		return 1;
	}
}

void pushElement(struct stack *s, int num)
{
	if(s->top == s->size - 1)
	{
		printf("Stack Is Full, Can't insert element: %d\n", num);
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
		return 0;
	}
	else
	{
		int num = s->arr[s->top];
		s->top--;
		return num;
	}
}

int main()
{	
	struct stack *s;
	s = (struct stack *)malloc(sizeof(struct stack));

	s->size = 10;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int));

    pushElement(s, 10);
    pushElement(s, 20);
    pushElement(s, 30);
    pushElement(s, 40);
    pushElement(s, 50);
    pushElement(s, 60);
    pushElement(s, 70);
    pushElement(s, 80);
    pushElement(s, 90);
    pushElement(s, 100);

    printf("%d is popped from the stack.\n", popElement(s));
    printf("%d is popped from the stack.\n", popElement(s));
    printf("%d is popped from the stack.\n", popElement(s));
    printf("%d is popped from the stack.\n", popElement(s));
    printf("%d is popped from the stack.\n", popElement(s));
    printf("%d is popped from the stack.\n", popElement(s));
    // printf("%d is popped from the stack.\n", popElement(s));
    // printf("%d is popped from the stack.\n", popElement(s));
    // printf("%d is popped from the stack.\n", popElement(s));
    // printf("%d is popped from the stack.\n", popElement(s));

    if(popElement(s) == 0)
    {
     printf("Stack is Empty.\n");
    }

	return 0;
}