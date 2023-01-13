#include <stdio.h>
#include <stdlib.h>

struct dll
{
	int id;
	char branch[20];
	char name[20];
	char specialization[20];
	struct dll *llink;
	struct dll *rlink;
};

typedef struct dll * node;

node top = NULL;
node front = NULL;
node rear = NULL;

void stack_push()
{
	node new = (node) malloc(sizeof(struct dll));
	printf("Enter id : ");
	scanf("%d", &new->id);
	printf("Enter name : ");
	scanf("%s", new->name);
	printf("Enter branch : ");
	scanf("%s", new->branch);
	printf("Enter specialization : ");
	scanf("%s", new->specialization);

	new->llink = NULL;
	new->rlink = top;
	top = new;
}

void stack_pop()
{
	node temp = top;
	printf("Popping %s\n", temp->name);
	top = top->rlink;
	free(temp);
}

void queue_push()
{
	node new = (node) malloc(sizeof(struct dll));
	printf("Enter id : ");
	scanf("%d", &new->id);
	printf("Enter name : ");
	scanf("%s", new->name);
	printf("Enter branch : ");
	scanf("%s", new->branch);
	printf("Enter specialization : ");
	scanf("%s", new->specialization);
	
	rear->rlink = new;
	new->llink = rear;
	new->rlink = NULL;
	rear = new;
}

void queue_pop()
{
	node temp = front;
	printf("Popping %s\n", temp->name);
	front = front->rlink;
	free(temp);
}

void stack_display()
{
	printf("\nStack Contents : \n");
	node temp = top;
	while(temp != NULL)
	{
		printf("\nId : %d", temp->id);
		printf("\nName : %s", temp->name);
		printf("\nBranch : %s", temp->branch);
		printf("\nSpecialization : %s\n\n", temp->specialization);
		temp = temp->rlink;
	}
}

void queue_display()
{
	printf("\nQueue Contents : \n");
	node temp = front;
	while(temp != NULL)
	{
		printf("\nId : %d", temp->id);
		printf("\nName : %s", temp->name);
		printf("\nBranch : %s", temp->branch);
		printf("\nSpecialization : %s\n\n", temp->specialization);
		temp = temp->rlink;
	}
}

void stack()
{
	int ch;
	while(1)
	{
		printf("1. Push \n2. Pop \n3. Display \n4. Exit \nChoose an option : ");
		scanf("%d", &ch);
	
		switch(ch)
		{
			case 1: stack_push();
				break;
			case 2: stack_pop();
				break;
			case 3: stack_display();
				break;
			case 4: printf("\nReturning to main menu!\n");
				return;
			default: printf("Invalid option!\n");
		}
	}
}

void queue()
{
	int ch;
	while(1)
	{
		printf("1. Push \n2. Pop \n3. Display \n4. Exit \nChoose an option : ");
		scanf("%d", &ch);
	
		switch(ch)
		{
			case 1: queue_push();
				break;
			case 2: queue_pop();
				break;
			case 3: queue_display();
				break;
			case 4: printf("\nReturning to main menu!\n");
				return;
			default: printf("Invalid option!\n");
		}
	}
}

void status()
{
	printf("\nSTATUS\n");
		
	int count = 0;
	node tmp = top;
	while(tmp != NULL)
	{
		count +=1;
		tmp = tmp->rlink;
	}
	if(count == 0)
	{
		printf("\nStack : Empty\n");
	}
	else
	{
		printf("\nStack : %d nodes\n", count);
	}

	count =0;
	tmp = front;
	while(tmp != NULL)
	{
		count +=1;
		tmp = tmp->rlink;
	}
	if(count == 0)
	{
		printf("Queue : Empty\n\n");
	}
	else
	{
		printf("Queue : %d nodes\n\n", count);
	}	
}

void main()
{
	int ch;
	while(1)
	{
		printf("1. DLL Stack \n2. DLL Queue \n3. Status of DLL and count of nodes \n4. Exit \nChoose an option : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: stack();
				break;
			case 2: queue();
				break;
			case 3: status();
				break;
			case 4: printf("Exiting ...\n");
				return;
			default : printf("Invalid Option!\n");			
		}	
	}		
}
