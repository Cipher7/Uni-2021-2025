#include <stdio.h>

void main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d", &a);
	
	int t=a;
	int r=0;

	while(t != 0)
	{
		int d = t % 10;
		r = (r*10)+d;
		t = t/10;	
	}

	if(r == a)
	{
		printf("The number is palindrome \n");
	}
	else
	{
		printf("The number is not palindrome \n");
	}
}
