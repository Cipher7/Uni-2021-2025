#include <stdio.h>

void main()
{
	struct student
	{
		int usn;
		char name[20];
		int psp, math, chem;
		float avg;
	};

	int n;
	printf("Enter number of students : ");
	scanf("%d", &n);

	struct student s[n];

	for(int i=0;i<n;i++)
	{
		printf("\nStudent %d Details : \n", (i+1));
		printf("USN : ");
		scanf("%d", &s[i].usn);
		printf("Name : ");
		scanf("%s", s[i].name);
		printf("PSP marks : ");
		scanf("%d", &s[i].psp);
		printf("Chem marks : ");
		scanf("%d", &s[i].chem);
		printf("Math marks : ");
		scanf("%d", &s[i].math);

		s[i].avg = (s[i].psp + s[i].chem + s[i].math)/3;

		printf("AVG : %.2f \n", s[i].avg);
		if(s[i].avg > 35)
		{
			printf("Student is above average.\n");
		}
		else
		{
			printf("Student is below average\n");
		}
	}
}
