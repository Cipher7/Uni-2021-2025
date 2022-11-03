#include <stdio.h>
#include <string.h>

int main()
{
	char w1[200], w2[200];
	printf("Enter first word : ");
	scanf("%s", w1);
	printf("Enter second word : ");
	scanf("%s", w2);
	int p;
	
	int l1 = 0, l2 = 0;
	 
	for (int i = 0; i < 200 ; i++)
	{
		if(w1[i] != '\0')
		{		
			l1 += 1;
		}
		if(w2[i] != '\0')
		{
			l2 += 1;
		}
		if(w2[i] == '\0')
		{
			break;
		}
		if(w1[i] == '\0')
		{
			break;
		}
	}
	
	if(l1 == l2)
	{
		for (int i=0; i< l1; i++)
		{
			p = 0;
			for(int j=0; j < l2; j++)
			{
				//printf("%c %c \n", w1[i], w2[j]);
				if(w1[i] == w2[j])
				{
					p = 1;
					break;
				}
			}
			if(p == 0)	
			{
				printf("It is not an anagram \n");
				return 0;
			}		
		}
		printf("It is an Anagram!");
	}
	else
	{
		printf("It is not an anagram");
	}
	return 0;
}
