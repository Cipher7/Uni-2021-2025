#include <stdio.h>

void tower(int n, char src, char tmp, char dest)
{
	if(n==1)
	{
		printf("Move disk %d from Tower %c to Tower %c\n", n,src,dest);
		return;
	}
	
	tower(n-1, src, dest, tmp);
	
	printf("Move disk %d from Tower %c to Tower %c\n", n,src,dest);

	tower(n-1, tmp, src, dest);
}

int main()
{
	int n;
	printf("Enter number of disks : ");
	scanf("%d", &n);
	tower(n,'A','B','C');
	return 0;
}
