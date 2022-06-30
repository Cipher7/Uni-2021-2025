#include <stdio.h>

void main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d", &a);

	int count=0;
	int t=a;

	while(t != 0)
	{
		int d = t % 10;
		count += 1;
		t = t/10;
	}

	t=a;
	int sum=0;
	while(t != 0)
	{
		int d = t % 10;
		int p=1;
		for (int i=1;i<=count;i++)
		{
			p = p*d;
		}
		sum += p;
		
		t = t/10;
	}
	
	if(sum == a)
	{
		printf("The number is armstrong \n");
	}
	else
	{
		printf("The number is not armstrong \n");
	}
}
