#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *left;
	struct node *right;
};

 //       10
 //     /   \
 //   20     30
 //  / \    / \
 // 40 50  60 70

 // Ans :- 10, 20, 40, 50, 30, 60, 70

void traverseElement(struct node* p)
{
	if(p != NULL)
	{
		printf("%d  ", p->data);
		traverseElement(p->left);
		traverseElement(p->right);
	}
}

struct node *newNode(int data)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));

	ptr->data = data;
	ptr->left = NULL;
	ptr->right = NULL;

	return ptr;
}

int main()
{
	struct node *p;
	p = (struct node*)malloc(sizeof(struct node));
	p->data = 10;
	p->left = NULL;
	p->right = NULL;	

	struct node *p1;
	struct node *p2;
	struct node *p3;
	struct node *p4;
	struct node *p5;
	struct node *p6;

	p1 = newNode(20);
	p2 = newNode(30);
	p3 = newNode(40);
	p4 = newNode(50);
	p5 = newNode(60);
	p6 = newNode(70);

	p->left = p1;
	p->right = p2;

	p1->left = p3;
	p1->right = p4;

	p2->left = p5;
	p2->right = p6;

	traverseElement(p);

	return 0;
}