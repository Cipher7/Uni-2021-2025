#include <stdio.h>

void main()
{
	int n;
	printf("Enter the size of array : ");	
	scanf("%d", &n);
	int a[n];	
	printf("Enter %d elements : ", n);	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	int min=a[0], max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i] < min)
		{
			min=a[i];
		}
		else if(a[i] > max)
		{
			max=a[i];
		}
	}
	int sum = min+max;
	int mid = n/2;
	int sum2 = a[0] + a[mid] + a[n-1];
	printf("\nSum1 = %d", sum);	
	printf("\nSum2 = %d", sum2);
}
