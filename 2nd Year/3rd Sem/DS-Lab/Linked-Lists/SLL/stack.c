#include <stdio.h>
#include <stdlib.h>

struct sll
{
	int data;
	struct sll * link;
};

typedef struct sll * node;
node top = NULL;

void push(int n)
{
	node new;
	new = (node) malloc(sizeof(struct sll));
	new->data = n;
	new->link = NULL;
	if(top == NULL)
	{
		top = new;
	}
	else
	{
		new->link = top;
		top = new;
	}
}

void pop()
{
	node temp;
	temp = top;
	top = top->link;
	printf("Popping %d \n", temp->data);
	free(temp);
}

void display()
{
	node temp;
	temp = top;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

void main()
{
	while(1)
	{
		printf("1. Push \n2. Pop \n3. Display \n4. Exit");
		printf("\nChoose an option : ");
		int ch;
		scanf("%d", &ch);
	
		switch(ch)
		{
			case 1: printf("Enter Element to be pushed : ");
				int n;
				scanf("%d", &n);
				push(n);
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: printf("Exiting ...\n");
				return;
			default: printf("Invalid option!\n");
		}
	}
}

