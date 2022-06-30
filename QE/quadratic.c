#include <stdio.h>
#include <math.h>

void main()
{
	float a,b,c,r1,r2,d,real,img;

	printf("Enter values of a, b and c");
	scanf("%f%f%f", &a, &b, &c);
	d = (b*b)-(4*a*c);
	if(a!=0)
	{
		if(d == 0)
		{
			r1 = -(b)/(2*a);
			r2=r1;
			printf("r1 = %lf", r1);
			printf("r2 = %lf", r2);
		}
		else if(d > 0)
		{
			r1 = (-(b) + sqrt(d))/(2*a);
			r2 = (-(b) - sqrt(d))/(2*a);
			printf("r1 = %lf", r1);
			printf("r2 = %lf", r2);
		}
		else
		{
			real = -(b)/(2*a);
			img = sqrt(d)/(2*a);
			printf("r1 = %lf + i%lf", real, img);
			printf("r2 = %lf - i%lf", real, img);
		}
	}
	else
	{
		printf("Not a Quadratic equation");
	}

}
