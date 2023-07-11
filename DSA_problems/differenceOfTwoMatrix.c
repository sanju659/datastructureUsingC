	#include<stdio.h>
	int main()
	{ int m1[3][3], m2[3][3], m3[3][3];

		int i, j;

		printf("Enter the first matrix elements: \n");
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
			{
				scanf("%d", &m1[i][j]);
			}
		}

		printf("Your first matrix is : \n");
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
			{
				printf("%d\t", m1[i][j]);
			}
			printf("\n");
		}

		printf("Enter the second matrix elements: \n");
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
			{
				scanf("%d", &m2[i][j]);
			}
		}

		printf("Your second matrix is : \n");
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
			{
				printf("%d\t", m2[i][j]);
			}
			printf("\n");
		}

		printf("Difference of two matrix is : \n");
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
			{
				m3[i][j] = m1[i][j] - m2[i][j];
				printf("%d\t", m3[i][j]);
			}
			printf("\n");
		}

		return 0;
	}