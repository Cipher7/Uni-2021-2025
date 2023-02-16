#include <stdio.h>
#include <math.h>

char str[5];
char ordered[7];

int priority(char c)
{
	switch(c)
	{
		case '/' : return 3;
			   break;
		case '*' : return 2;
			   break;
		case '+' : return 1;
			   break;
		case '-' : return 1;
			   break;
	}
}

void tree()
{
	// printing the output pattern	
	int line_count=1, levels=3;
	int ptr=0;
	
	for(int i=levels; i>=0;i--)
	{
		//spacing
		for(int j=0; j<=levels; j++)
		{
			printf(" ");
		}
		
		//printing values
		for(int j=0; j < pow(2,(levels-i)); j++)
		{
			if(ordered[ptr] != ' ')
				printf("%c ", ordered[ptr]);
			else
				printf("%c", ordered[ptr]);
			ptr ++;
		}
		printf("\n");
		if(ptr > 6)
			return;

		// spacing for links
		for(int j=0; j<=levels; j++)
		{
			printf(" ");
		}
		
		//printing links
		for(int j=1; j<=line_count; j++)
		{
			printf("/\\");		
		}
		printf("\n");
		line_count++;
	}

}

void main()
{
	char str[5];
	printf("Enter the string : ");
	scanf("%s", str);
	if( priority(str[1]) >= priority(str[3]))
	{
		ordered[0] = str[3];
		ordered[1] = str[1];
		ordered[2] = str[4];
		ordered[3] = str[0];
		ordered[4] = str[2];
		ordered[5] = ' ';
		ordered[6] = ' ';	
	}

	else
	{
		ordered[0] = str[1];
		ordered[1] = str[0];
		ordered[2] = str[3];
		ordered[3] = ' ';
		ordered[4] = ' ';
		ordered[5] = str[2];
		ordered[6] = str[4];
	}
	printf("%s", ordered);
	printf("\n");
	
	tree();
}

