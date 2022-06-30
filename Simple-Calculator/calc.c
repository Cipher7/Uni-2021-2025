// Program to stimulate simple calculator

#include <stdio.h>

int main()
{
	int num1,num2,sum;
	char op;

	printf("Enter an arithmetic operator : ");
	// Accepting operator
	scanf("%c", &op);
	

	// Display message
	printf("Enter two numbers : ");
	// Input and store the two numbers
	scanf("%d%d", &num1, &num2);
	
	if(op == '+')
	{
		sum = num1 + num2;
	}
	else if(op == '-')
	{
		sum = num1 - num2;
	}
	else if(op == '*')
	{
		sum = num1 * num2;
	}
	else if(op == '/')
	{
		sum = num1 / num2;
	}

	else if(op == '%')
	{
		sum = num1 % num2;
	}
	else
	{
	//	printf("Operator not supported\n");
	}

	printf("%d %c %d = %d\n", num1, op, num2, sum);
}
