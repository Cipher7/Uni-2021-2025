#include <stdio.h>

int isPrime(int a);

void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);

	isPrime(n);
}

int isPrime(int a)
{
	for(int i=2; i<= a/2; i++)
	{
		if(a%i == 0)
		{
			printf("It is not a prime number.\n");
			return 0;
		}
	}
	printf("It is a prime number.\n");
	return 0;
}
