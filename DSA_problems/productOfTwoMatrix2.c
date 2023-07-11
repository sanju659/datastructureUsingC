	#include<stdio.h>
	int main()
	{
		int row1, col1, row2, col2, i, j, k;
		int mat1[100][100], mat2[100][100], product[100][100], sum = 0;

		printf("Enter the number of rows and columns of the first matrix: \n");
		scanf("%d %d", &row1, &col1);
		printf("Enter the number of rows and columns of the second matrix: \n");
		scanf("%d %d", &row2, &col2);

		if(col1 == row2)
		{
		printf("Enter the elements of the first matrix: ");
		for(i = 0; i < row1; i++)
		{
			for(j = 0; j < col1; j++)
			{
			 scanf("%d", &mat1[i][j]);
			}
		}

		printf("First matrix: \n");
		for(i = 0; i < row1; i++)
		{
			for(j = 0; j < col1; j++)
			{
			 printf("%d\t", mat1[i][j]);
			}
			printf("\n");
		}

		printf("Enter the elements of the second matrix: ");
		for(i = 0; i < row2; i++)
		{
			for(j = 0; j < col2; j++)
			{
			 scanf("%d", &mat2[i][j]);
			}
		}

		printf("Second matrix: \n");
		for(i = 0; i < row2; i++)
		{
			for(j = 0; j < col2; j++)
			{
			 printf("%d\t", mat2[i][j]);
			}
			printf("\n");
		}

		for(i= 0; i < row1; i++)
		{
			for(j = 0; j < col2; j++)
			{
				for(k = 0; k < col1; k++)
				{
					sum += mat1[i][k] * mat2[k][j];
				}
				product[i][j] = sum;
				sum = 0;
			}
		}

		printf("Product of the matrix: \n");
		for(i = 0; i < row1; i++)
		{
			for(j = 0; j < col2; j++)
			{
			 printf("%d\t", product[i][j]);
			}
			printf("\n");
		}
		}
		else
		{
			printf("your oparation can't be performed\n");
		}

		return 0;
	}