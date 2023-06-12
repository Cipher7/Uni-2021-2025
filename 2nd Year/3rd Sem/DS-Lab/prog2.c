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

void insert(int a[], int num, int pos)
{
	for(int i=n-1; i>=pos-1; i--)
	{
		a[i+1] = a[i];
	}
	n += 1;
	a[pos-1] = num;
}

void delete(int a[], int pos)
{
	for(int i=pos;i<n;i++)
	{
		a[i-1] = a[i];
	}
	n -= 1;
}

int main()
{
	int choice,pos;
	int a[200];
	while(1)
	{
		printf("1. Create\n");
		printf("2. Display\n");
		printf("3. Insert\n");
		printf("4. Delete\n");
		printf("5. Exit\n");
		printf("\nChoose one of the above options : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1 : create(a);
				 break;
			case 2 : display(a);
				 break;
			case 3 : printf("Enter the position : ");
				 scanf("%d", &pos);
				 if(pos > n)
				 	break;
				 printf("Enter the number : ");
				 int num;
				 scanf("%d", &num);
				 insert(a,num,pos);
				 break;
			case 4 : printf("Enter the position : ");
				 scanf("%d", &pos);
				 if(pos > n)
				 	break;
				 delete(a,pos);
				 break;
			case 5 : printf("Exiting...");
				 return 0;
			default : printf("Invalid Option");
		}		
	}
}
