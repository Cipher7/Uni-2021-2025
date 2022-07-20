#include <stdio.h>

int main()
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
			if(a[i]>a[i+1])
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

	int key;
	printf("Enter key value : ");
	scanf("%d", &key);
	int f=0, l=size-1;
	int m;

	while(f<l)
	{
		m = (f+l)/2;
		if(a[m] == key)
		{
			printf("Key has been Found!");
			return 0;
		}

		else if(key > a[m])
		{
			f=a[m+1];
		}
		else
		{
			l=a[m-1];
		}
	}

	printf("Key not found!");
	return 0;
}
