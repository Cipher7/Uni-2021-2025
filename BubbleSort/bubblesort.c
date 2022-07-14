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
		for(int j=0; j < size-1; j++)
		{
			if(a[i]>a[i+1])
			{
				a[i]=a[i]+a[i+1];
				a[i+1]=a[i]-a[i+1];
				a[i]=a[i]-a[i+1];
			}
		}
	}

	printf("\n OUTPUT : \n");
	for(int i=0; i<size; i++)
	{
		printf("%d \n", a[i]);
	}
}
