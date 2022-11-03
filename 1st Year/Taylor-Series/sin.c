// Program to compute Taylor Series of the sin function

#include <stdio.h>
#include <math.h>
#define PI 3.142857143

int main()
{
	float degree;
	float val=1;
	float sum = 0;
	int p=1;
	printf("Enter the degree : ");
	scanf("%f", &degree);
	float rad = degree*(PI/180.0);
	float num = rad;
	float den = 1;	
	
	do
	{
		val = num/den;
		sum += val;
		p += 2;
		num = (-num)*rad*rad;
		den *= p*(p-1);
	}
	while(val > 0.00001);

	printf("Computed value of sin(%.2f) : %.2f \n", degree, sum);
	printf("Vaue from built-in function sin(%.2f) : %.2f \n", degree, sin(rad));
	return 0;
}
