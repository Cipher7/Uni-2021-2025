#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX 100

float stack[MAX];
int top = -1;

void push(float n)
{
	if(top<MAX-1)
	{
		top += 1;
		stack[top] = n;	
	}
	else
	{
		printf("Overflow of Stack!\n");
	}
}

float pop()
{
	if(top == -1)
	{
		printf("Stack Underflow!\n");
	}
	else
	{
		float item = stack[top];
		top--;
		return item;
	}
}

float evaluate(char symbol, float op1, float op2)
{
	switch(symbol)
	{
		case '+' : return op1 + op2;
		case '-' : return op1 - op2;
		case '*' : return op1 * op2;
		case '/' : return op1 / op2;
		case '%' : return fmod(op1, op2);
		case '^' : return pow(op1,op2);
		default : printf("Invalid Character entered!");
	}	
}

int main()
{
	char postfix[50];
	printf("Enter the postfix string to evaluate : \n");
	scanf("%s", postfix);
	int res;char symbol;
	for(int i=0;postfix[i]!='\0';i++)
	{
		symbol = postfix[i];
		if(isdigit(symbol))
		{
			push(symbol - '0');
		}
		else
		{
			int op2 = pop();
			int op1 = pop();
			res = evaluate(symbol, op1, op2);
			push(res);
		}
	}
	res = pop();
	printf("\n\nResult : %d\n\n", res);	
}
