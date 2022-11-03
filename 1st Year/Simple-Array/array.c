#include <stdio.h>

void main()
{
	int a[50], n;

	printf("Enter the number of elements : ");
	scanf("%d", &n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the %d element : ",(i+1));
		scanf("%d", &a[i]);
		printf("\n");
	}

	printf("\n Array Elements are : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d \n", a[i]);
	}
}
