#include <stdio.h>

void main()
{
	int r1,c1,r2,c2,r3,c3;
	printf("Enter rows and columns of first matrix : ");
	scanf("%d %d", &r1, &c1);
	printf("Enter rows and columns of second matrix : ");
	scanf("%d %d", &r2, &c2);

	if(r2 != c1)
	{
		printf("Matrix multiplication not possible");
	}
	else
	{
		int a[r1][c1], b[r2][c2], c[r1][c2];

		printf("Enter elements of first matrix : ");
		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c1; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		
		printf("\nFirst matrix : \n");
		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c1; j++)
			{
				printf("%d\t", a[i][j]);
			}
			printf("\n");
		}

		printf("Enter elements of second matrix : ");
		for(int i=0; i<r2; i++)
		{
			for(int j=0; j<c2; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}

		printf("\nSecond matrix : \n");
		for(int i=0; i<r2; i++)
		{
			for(int j=0; j<c2; j++)
			{
				printf("%d \t", b[i][j]);
			}
			printf("\n");
		}
		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c2; j++)
			{
				int sum = 0;
				for(int k=0; k<r2; k++)
				{
					sum += (a[i][k] * b[k][j]);
				}
				c[i][j] = sum;
			}
		}

		printf("\nProduct matrix : \n");
		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c2; j++)
			{
				printf("%d \t", c[i][j]);
			}
			printf("\n");
		}
	}
}

