#include<stdio.h>
int main()
{
	int  row, col;
	int mat[100][100], transpose[100][100], i, j;

	printf("Enter the row and column of the matrix: \n");
	scanf("%d %d", &row, &col);

	printf("Enter the matrix elements: \n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	printf("your matrix before the transpose: \n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			transpose[j][i] = mat[i][j];
		}

	}

	printf("your matrix after the transpose: \n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}

	return 0;
}