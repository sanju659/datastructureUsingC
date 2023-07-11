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

void traverseElement(struct node* p)
{
	if(p != NULL)
	{
		printf("%d  ", p->data);
		traverseElement(p->left);
		traverseElement(p->right);
	}
}

int main()
{
	struct node *p;
	p = (struct node*)malloc(sizeof(struct node));
	p->data = 10;
	// p->left = NULL;
	// p->right = NULL;

	struct node *p1;
	p1 = (struct node*)malloc(sizeof(struct node));
	p1->data = 20;
	p1->left = NULL;
	p1->right = NULL;

	struct node *p2;
	p2 = (struct node*)malloc(sizeof(struct node));
	p2->data = 30;
	p2->left = NULL;
	p2->right = NULL;

	p->left = p1;
	p->right = p2;

	traverseElement(p);

	return 0;
}