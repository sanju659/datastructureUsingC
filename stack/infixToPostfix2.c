#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node 
{	
	int size;
	int top;
	char *arr;
};

char top(struct node *sp)
{
	return sp->arr[sp->top];
}

int isEmpty(struct node *sp)
{
	if(sp->top == -1){
		return 1;
	}
	return 0;
}

int isFull(struct node *sp)
{
	if(sp->top == sp->size-1){
		return 1;
	}
	return 0;
}

void push(struct node *sp, char ch)
{
	if(isFull(sp))
	{
		printf("Stack is full.\n");
	}
	else
	{
		sp->top++;
		sp->arr[sp->top] = ch;
	}
}

char pop(struct node *sp)
{
	if(isEmpty(sp))
	{
		printf("Stack is Empty.\n");
		return -1;
	}
	else
	{
		char ch = sp->arr[sp->top];
		sp->top--;
		return ch;
	}
}

int isOperator(char ch)
{
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
		return 1;
	}
	return 0;
}

int operatorPrecedence(char ch)
{
	if(ch == '*' || ch == '/')
	{
		return 3;
	}
	else if(ch == '+' || ch == '-')
	{
		return 2;
	}
	return 0;
}

char *infixToPostfix(char *infix)
{
	struct node *sp = (struct node *)malloc(sizeof(struct node));
	sp->top = -1;
	sp->size = 5;
	sp->arr = (char *)malloc(sp->size * sizeof(char));
	char *postfix = (char *)malloc(strlen(infix) * sizeof(char));

	int i = 0, j = 0;
	while(infix[i] != '\0')
	{
		if(!isOperator(infix[i]))
		{
			postfix[j] = infix[i];
			i++;
			j++;
		}
		else if(operatorPrecedence(infix[i]) > operatorPrecedence(top(sp)))
		{
			push(sp, infix[i]);
			i++;
		}
		else
		{
			postfix[j] = pop(sp);
			j++;
		}
	}

	while(!isEmpty(sp))
	{
		postfix[j] = pop(sp);
		j++;
	}
	return postfix;
}

int main()
{
	char infix[20];
	printf("Enter the expressin.\n");
	scanf("%s", infix);
	// gets(infix);
	char *postfix = infixToPostfix(infix);
	printf("Expression %s after postfix: %s",infix, postfix);
	return 0;
}