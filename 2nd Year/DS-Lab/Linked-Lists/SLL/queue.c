#include <stdio.h>
#include <stdlib.h>

struct sll
{
	int usn;
	int marks;
	char name[20];
	struct sll * link;
};

typedef struct sll * node;
node top = NULL;

void push()
{
	node new;
	new = (node) malloc(sizeof(struct sll));
	printf("Enter name : ");
	scanf("%s", new->name);
	printf("Enter usn : ");
	scanf("%d", &new->usn);
	printf("Enter marks : ");
	scanf("%d", &new->marks);
		
	new->link = NULL;
	node temp = top;
	if(top == NULL)
	{
		top = new;
		return;
	}
	while(temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = new;
}

void pop()
{
	node temp;
	temp = top;
	top = top->link;
	printf("Popping %d \n", temp->usn);
	free(temp);
}

void display()
{
	node temp;
	temp = top;
	while(temp != NULL)
	{
		printf("\nName : %s ", temp->name);
		printf("\nUSN : %d ", temp->usn);
		printf("\nMarks : %d \n", temp->marks);
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
			case 1: push();
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

