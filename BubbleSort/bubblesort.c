#include <stdio.h>

void main()
{
	int size;

	printf("Enter the number of elements : ");
	scanf("%d", &size);

	int a[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i=0; i<size-1 ;i++)
	{
		for(int j=0; j < size-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}

	printf("\n OUTPUT : \n");
	for(int i=0; i<size; i++)
	{
		printf("%d \n", a[i]);
	}
}
