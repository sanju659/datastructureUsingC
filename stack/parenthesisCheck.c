#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node 
{
	int size;
	int top;
	char *arr;
};

int isEmpty(struct node *ptr)
{
	if(ptr->top == -1)
	{
		return 1;
	}
	return 0;
}

int isFull(struct node *ptr, int size)
{
	if(ptr->top == ptr->size-1)
	{
		return 1;
	}
	return 0;
}

void pushElement(struct node *ptr, char ch, int size)
{
	if(isFull(ptr, size)){
		printf("Stack Over Flow.\n");
	}else{
		ptr->top++;
		ptr->arr[ptr->top] = ch;
	}
}

char popElement(struct node *ptr)
{
	if(isEmpty(ptr)){
		// printf("Stack Under Folw.\n");
		return '0';
	}else{
		int num = ptr->top;
		ptr->top--;
		return ptr->arr[num];
	}
}

int parenthesisMatch(char *exp, int size)
{
	struct node *s = (struct node *)malloc(sizeof(struct node));
	s->size = size;
	s->top = -1;
	s->arr = (char *)malloc(s->size * sizeof(char));

	for(int i = 0; exp[i] != '\0'; i++){
		if(exp[i] == '('){
			pushElement(s, '(', size);
			}else if(exp[i] == ')'){
				if(isEmpty(s)){
					return 0;
				}
				popElement(s);
			}
		}

		if(isEmpty(s)){
			return 1;
		}else{
			return 0;
		}
	}


int main()
{
	char *exp = "((ax+by)*c)+(d";

	if(parenthesisMatch(exp, strlen(exp))){
		printf("Matching.\n");
	}else{
		printf("Not Matching.\n");
	}

	return 0;
}