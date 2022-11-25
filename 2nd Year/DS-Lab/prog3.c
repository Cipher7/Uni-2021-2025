#include <stdio.h>

int top,size;

void push(int a[], int n)
{
	if(top<size)
	{
		top += 1;
		a[top] = n;	
	}
	else
	{
		printf("Overflow of Stack!\n");
	}
}

int pop(int a[])
{
	if(top == -1)
	{
		printf("Stack Underflow!\n");
	}
	else
	{
		int item = a[top];
		top--;
		return item;
	}
}

void display(int a[])
{
	printf("\nPrinting Stack : \n");
	for(int i=0;i<=top;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n");
}

int main()
{
	top=-1;
	size=5;
	int a[size],n;
	int ch;
	while(1)
	{
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Choose one of the above options : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("Enter value to be pushed : ");
				 scanf("%d", &n);
				 push(a,n);
				 break;
			case 2 : printf("\nPopping %d \n",pop(a));
				 break;
			case 3 : display(a);
				 break;
			case 4 : printf("Exiting ...\n\n");
				 return 0;
			default : printf("Invalid option");
		}
	}
}
