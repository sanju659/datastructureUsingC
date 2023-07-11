#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *left;
	struct node *right;
};

void preOrderTraversal(struct node *groot)
{
	if(groot != NULL){
		printf("%d ", groot->data);
		preOrderTraversal(groot->left);
		preOrderTraversal(groot->right);
	}
}

void inOrderTraversal(struct node *groot)
{
	if(groot != NULL){
		inOrderTraversal(groot->left);
		printf("%d ", groot->data);
		inOrderTraversal(groot->right);
	}
}

void postOrderTraversal(struct node *groot)
{
	if(groot != NULL){
		postOrderTraversal(groot->left);
		postOrderTraversal(groot->right);
		printf("%d ", groot->data);
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
	struct node *groot;
	groot = (struct node *)malloc(sizeof(struct node));

	groot->data = 7;
	groot->left = NULL;
	groot->right = NULL;

	struct node *p1, *p2, *p3, *p4, *p5, *p6, *p7, *p8, *p9, *p10, *p11, *p12, *p13, *p14;

	p1 = newNode(8);
	p2 = newNode(9);
	p3 = newNode(10);
	p4 = newNode(11);
	p5 = newNode(12);
	p6 = newNode(13);
	p7 = newNode(21);
	p8 = newNode(14);
	p9 = newNode(20);
	p10 = newNode(15);
	p11 = newNode(16);
	p12 = newNode(17);
	p13 = newNode(18);
	p14 = newNode(19);

	groot->left = p1;
	groot->right = p2;

	p1->left = p3;
	p1->right = p4;

	p2->left = p5;
	p2->right = p6;

	p3->left = p7;

	p4->left = p8;

	p5->right = p9;

	p6->right = p10;

	p8->left = p11;
	p8->right = p12;

	p10->left = p13;
	p10->right = p14;

	preOrderTraversal(groot);
	printf("\n");
	inOrderTraversal(groot);
	printf("\n");
	postOrderTraversal(groot);
	return 0;
}