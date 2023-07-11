#include<stdio.h>
#include<stdlib.h>

struct stack 
{
	int size;
	int top;
	int *arr;
};

int pushElements(struct stack *s, int num)
{
	if(s->top == s->size - 1)
	{
		printf("Stack Is Full.\n");
		return -1;
	}
	else
	{
		s->top++; //-1 to 0 to 1 to 3 ... to 9
		s->arr[s->top] = num;
		return s->arr[s->top];
	}
}

int popElements(struct stack *s)
{
	if(s->top == -1)
	{
		printf("Stack Is Empty.\n");
		return -1;
	}
	else
	{
		int num = s->arr[s->top];
		s->top--;
		return num;
	}
}

int peekElements(struct stack *s, int i)
{
	if(s->top-i+1 < 0)
	{
		printf("Invalid Operation. \n");
		return -1;
	}
	else
	{
		return s->arr[s->top-i+1];
	}
}

int main()
{
	struct stack *s; // pointer to a structure
	s = (struct stack *)malloc(sizeof(struct stack));

	s->size = 10;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int));

	printf("%d pushed in the Stack.\n",pushElements(s, 10));
	printf("%d pushed in the Stack.\n",pushElements(s, 20));
	printf("%d pushed in the Stack.\n",pushElements(s, 30));
	printf("%d pushed in the Stack.\n",pushElements(s, 40));
	printf("%d pushed in the Stack.\n",pushElements(s, 50));
	printf("%d pushed in the Stack.\n",pushElements(s, 60));
	printf("%d pushed in the Stack.\n",pushElements(s, 70));
	printf("%d pushed in the Stack.\n",pushElements(s, 80));
	printf("%d pushed in the Stack.\n\n",pushElements(s, 90)); 

	printf("%d popped from the Stack.\n", popElements(s));
	printf("%d popped from the Stack.\n", popElements(s));
	printf("%d popped from the Stack.\n\n", popElements(s));

	for(int i = 1; i <= s->top+1; i++)
	{
		printf("Element at position %d is: %d\n", i, peekElements(s, i));
	}

	free(s);
	free(s->arr);
	
	return 0;  
}