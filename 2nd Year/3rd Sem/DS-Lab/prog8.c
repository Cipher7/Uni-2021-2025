#include <stdio.h>
#include <stdlib.h>

struct dll
{
	int data;
	struct dll *llink;
	struct dll *rlink;
};

typedef struct dll *node;

node root = NULL;

void insert(int item)
{
	node curr,prev;
	node new = (node) malloc(sizeof(struct dll));
	new->data = item;
	new->llink = NULL;
	new->rlink = NULL;

	if(root == NULL)
	{
		root = new;
		return;
	}
	
	prev = NULL;
	curr = root;
	
	while(curr != NULL)
	{
		prev = curr;
		if(item < curr->data)
			curr = curr->llink;
		else
			curr = curr->rlink;
	}
	if(item < prev->data)
		prev->llink = new;
	else
		prev->rlink = new;
}

void inorder(node root)
{
	if(root == NULL)
		return;

	inorder(root->llink);
	printf("%d ", root->data);	
	inorder(root->rlink);
}

void preorder(node root)
{
	if(root == NULL)
		return;

	printf("%d ", root->data);
	preorder(root->llink);	
	preorder(root->rlink);
}

void postorder(node root)
{
	if(root == NULL)
		return;

	postorder(root->llink);
	postorder(root->rlink);
	printf("%d ", root->data);
}

void main()
{
	int n, ch, ele;
		
	while(1)
	{
		printf("1. Insertion \n2. Traversal \n3. Exit \nChoose an option : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1 :  printf("Enter the number of integers : ");
				  scanf("%d", &n);
				  printf("Enter %d elements \n", n);
				  for(int i=1; i<=n; i++)
				  {
					scanf("%d", &ele);
					insert(ele);
				  }
				  break;
			case 2 : while(1)
				 {
					printf("1. Preorder \n2. Inorder \n3. Postorder \n4. Exit \nChoose an option : ");
					scanf("%d", &ch);
					switch(ch)
					{
						case 1 : printf("Preorder : ");
							 preorder(root);
							 printf("\n");
							 break;
						case 2 : printf("Inorder : ");
							 inorder(root);
							 printf("\n");
							 break;
						case 3 : printf("Postorder : ");
							 postorder(root);
							 printf("\n");
							 break;
						case 4 : printf("Exiting ...\n");
							 return;
						default : printf("Invalid option!\n");
					}
				 }
				 break;
			case 3 : printf("Exiting ...\n");
				 return;
			default : printf("Invalid Option!\n");
		}
	}
}
