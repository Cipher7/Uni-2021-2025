#include <stdio.h>

void main()
{
	int a=1;
	int count = 0;
	while(count <= 100)
	{
		int check = 0;
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
			check=1;
		}
	
		if(check == 1)
		{
			for (int i=2; i<a; i++)
			{
				if(a%i == 0)
				{
					check = 0;
				}
			}
		}

		if(check == 1)
		{
			printf("No. %d ==>  %d \n", count, a);
			count++;
		}
		a += 1;
	}
}
