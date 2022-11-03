#include <stdio.h>

int main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d", &a);

	for (int i=2; i<a/2; i++)
	{
		if(a%i == 0)
		{
			printf("Number is not prime. \n");
			return 0;
		}
	}
	printf("Number is prime number \n");
}
