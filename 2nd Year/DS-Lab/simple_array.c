#include <stdio.h>

void main()
{
	printf("Enter the size of array : ");
	int n;	
	scanf("%d", &n);
	int a[n];
	
	printf("Enter %d elements : ", n);	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nElements entered are : ");
	for(int i=0; i<n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
}
