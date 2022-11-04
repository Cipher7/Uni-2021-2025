#include <stdio.h>

int main()
{
	int choice, cost;
	printf("**********************");
	printf("\n1. Biryani \n2. Kebab \n3. Veg Pulao \n4. Raita \n5. Gulab Jamun \n");
	printf("**********************");
	printf("\nEnter your choice : ");
	scanf("%d", &choice);
	printf("\n");

	switch(choice)
	{
		case 1 : printf("Customer ordered Biyani");
			 cost = 250;
			 break;
		case 2 : printf("Customer ordered Kebab");
			 cost = 150;
			 break;
		case 3 : printf("Customer ordered Veg Pulao");
			 cost = 150;
			 break;
		case 4 : printf("Customer ordered Raita");
			 cost = 20;
			 break;
		case 5 : printf("Customer ordered Gulab Jamun");
			 cost = 50;
			 break;
		default : printf("Invalid Option");
			  return 0;
	}
	printf("\n\nCost : %d\n", cost);
	return 0;
}
