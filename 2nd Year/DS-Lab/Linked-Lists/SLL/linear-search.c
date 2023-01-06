#include <stdio.h>
#include <stdlib.h>

struct sll
{
	int data;
	struct sll * link;
};

typedef struct sll * node;

node create(int arr[], int size)
{
	node temp, last, t;
	temp = (node) malloc(sizeof(struct sll));
	temp->data = arr[0];
	temp->link = NULL;
	last = temp;

	for(int i=1; i<size ; i++)
	{
		t = (node) malloc(sizeof(struct sll));
		t->data = arr[i];
		t->link = NULL;
		last->link = t;
		last = t;
	}

	return temp;
}

void main()
{
	int size, key;
	printf("Enter length of the linked list : ");
	scanf("%d", &size);
	int a[size];
	printf("Enter %d elements : ", size);
	
	for(int i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}

	node list = create(a, size);

	printf("Enter element to be searched : ");
	scanf("%d", &key);

	node temp = list;
	int loc=1;
	
	while(temp != NULL)
	{
		if(temp->data == key)
		{
			printf("Element Found at location %d", loc);
			return;
		}
		temp = temp->link;
		loc++;
	}
	printf("Element not Found!");
}