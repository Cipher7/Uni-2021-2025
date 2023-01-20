#include <stdio.h>
#include <math.h>

void main()
{
	int size;
	printf("Enter size of array : ");
	scanf("%d", &size);
	int a[size];
	
	printf("Enter %d elements : ", size);
	for(int i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int levels=0;
	//Finding the number of levels
	for(int i=0;;i++)
	{
		if(pow(2,i) >= size)
		{
			levels = i;
			break;
		}
	}
	
	int ptr=0;
	int line_count=1;
	// Displaying using level order traversal for binary tree
	for(int i=levels; i >= 0; i--)
	{
		//spacing
		for(int j=0; j <= i+1; j++)
		{
			printf(" ");
		}
		
		//printing values
		for(int k=0; k < pow(2,(levels-i)) ; k++)
		{
			printf("%d ", a[ptr]);
			ptr++;
			if(ptr == size)
			{
				printf("\n");
				return;
			}			
		}
		printf("\n");
		for(int l=0; l <= i+1; l++)
		{
			printf(" ");
		}
		for(int m=1; m<= line_count ; m++)
		{
			printf("/\\");
		}
		line_count ++;
		printf("\n");
	}	
}
