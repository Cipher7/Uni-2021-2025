#include <stdio.h>

int n;

void create(int a[])
{
	printf("Enter the size of array : ");	
	scanf("%d", &n);
	printf("Enter %d elements : ", n);	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
}

void display(int a[])
{
	printf("\nElements entered are : ");
	for(int i=0; i<n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int choice;
	int a[200];
	while(1)
	{
		printf("1. Create\n");
		printf("2. Display\n");
		printf("3. Exit\n");
		printf("\nChoose one of the above options : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1 : create(a);
				 break;
			case 2 : display(a);
				 break;
			case 3 : return 0;
			default : printf("Invalid Option");
		}		
	}
}
