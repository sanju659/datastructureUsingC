#include <stdio.h>
#include <stdlib.h>

struct node {
	int size;
	int top;
	int *arr;
};

int isEmpty(struct node *s) {
	if (s->top == -1) {
		return 1;
	}
	return 0;  // Added return statement for the case when stack is not empty
}

int isFull(struct node *s) {
	if (s->top == s->size - 1) {
		return 1;
	}
	return 0;  // Added return statement for the case when stack is not full
}

void pushElement(struct node *s, int num) {
	if (isFull(s) == 1) {
		printf("Stack is full brother.\n");
	} else {
		s->top++;
		s->arr[s->top] = num;
		printf("%d pushed into the stack.\n", s->arr[s->top]);
	}
}

void popElement(struct node *s) {
	if (isEmpty(s) == 1) {
		printf("Stack is Empty.\n");
	} else {
		int num = s->arr[s->top];
		s->top--;
		printf("%d popped into the stack.\n", num);
	}
}

int stacksize(struct node *s)
{
	return s->top + 1;
}

// void showElement(struct node *s)
// {
// 	if(s->top == -1)
// 	{
// 		printf("Stack is Empty.\n");
// 	}
// 	else
// 	{	printf("Elements in the stack: \n");
// 		for(int i = s->top; i >= 0; i--)
// 		{
// 			printf("%d\n", s->arr[i]);
// 		}
// 	}
// }

void peekElement(struct node *s, int i)
{
	if(s->top == -1)
	{
		printf("Invalid operation.\n");
	}
	else
	{
		printf("Element at position %d is: %d\n", i, s->arr[s->top-i+1]);
	}
}

int main() {
	struct node *s;
	s = (struct node *)malloc(sizeof(struct node));

	s->size = 4;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int));

	s->arr[0] = 10;
	s->top++;

	if (isEmpty(s) == 1) {
		printf("Stack is empty.\n");
	}

	if (isFull(s) == 1) {
		printf("Stack is full.\n");
	}

	pushElement(s, 20);
	pushElement(s, 30);
	// pushElement(s, 40);
	
	// showElement(s);
	printf("%d elements are in the stack.\n", stacksize(s));

	for(int i = 1; i <= s->top+1; i++)
	{
		peekElement(s, i);
	}

	popElement(s);
	popElement(s);
	popElement(s);

	free(s->arr);
	free(s);

	return 0;
}
