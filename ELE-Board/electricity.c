#include <stdio.h>

void main()
{
	char name[20];
	float unit, amt;
	printf("Enter you name: ");
	scanf("%s", name);
	printf("Enter number of units consumed: ");
	scanf("%f", &unit);

	if (unit > 0)
	{
		if(unit > 0 && unit <= 200)
		{
			amt = 100 + (0.80*unit);
		}
		else if(unit <= 300)
		{
			amt = 100 + (0.80*200) + (0.90*(unit-200));
		}
		else
		{
			amt = 100 + (0.80*200) + (0.90*100) + (1*(unit-300));
		}
		if(amt > 400)
		{
			amt = amt + (0.15*amt);
		}
		printf("\n\n");
		printf("Name : %s \n", name);
		printf("Total Amount : %lf \n", amt);
	}
	else
	{
		printf("Error! Units consumed should be a number greater than 0 \n");
	}
}
