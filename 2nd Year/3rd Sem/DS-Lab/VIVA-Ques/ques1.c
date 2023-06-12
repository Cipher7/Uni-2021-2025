	// Array of size-5, insert 200 at 7th position. Will it work? If yes, then why?
#include <stdio.h>

void main()
{
	int a[5]={1,2,3,4,5};
	a[6]=200;
	for(int i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
}
