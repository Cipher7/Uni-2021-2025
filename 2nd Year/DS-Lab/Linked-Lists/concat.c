#include <stdio.h>
#include <stdlib.h>

struct sll
{
	int data;
	struct sll * link;
};

typedef struct sll * node;

void push(int n, node start)
{
	node new;
	new = (node) malloc(sizeof(struct sll));
	new->data = n;
	new->link = NULL;
	node temp = start;
	if(start == NULL)
	{
		start = new;
		return;
	}
	while(temp != NULL)
	{
		temp = temp->link;
	}
	temp->link = new;
}

node concat(node start1, node start2)
{
	if(start1 == NULL)
	{
		return start2;
	}
	else if (start2 == NULL)
	{
		return start1;
	}
	else
	{
		node temp = start1;
		while(temp->link != NULL)
		{
			temp = temp->link;
		}
		temp->link = start2;
		return start1;
	}
}

void display(node start)
{
	node temp;
	temp = start;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

void main()
{
	int l1, l2, n;
	printf("\nEnter length of the first linked list : ");
	scanf("%d", &l1);
	printf("\nEnter %d elements : ", l1);
	node start1 = NULL;
	for(int i=1; i<=l1; i++)
	{
		scanf("%d", &n);
		printf("%d", n);
		push(n, start1);
	}
	
	display(start1);

	printf("\nEnter length of the second linked list : ");
	scanf("%d", &l2);
	printf("\nEnter %d elements : ", l2);
	node start2 = NULL;
	for(int i=1; i<=l2; i++)
	{
		scanf("%d", &n);
		push(n, start2);
	}
	
	display(start2);	
	node final = concat(start1, start2);
	display(final);
}
