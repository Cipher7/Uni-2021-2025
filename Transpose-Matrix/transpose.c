#include <stdio.h>

void main()
{
	int r,c;
	printf("Enter the rows and columns of the matrix : ");
	scanf("%d %d",&r,&c);
	if(r != c)
	{
		printf("Matrix is not a square matrix.");
	}
	else
	{
		printf("Enter elements of the matrix : ");
		int a[r][c];
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int b[r][c];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				b[i][j]=a[j][i];
			}
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
	}
}
