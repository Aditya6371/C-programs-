#include<stdio.h>
//C PROGRAM TO REVERSE A NUMBER......
int main()
{
	int n, rev=0;
	printf ("enter a number:");
	scanf("%d", &n);
	while (n!=0)
	{
		rev=(n%10)+(rev*10);
		n=n/10;
	}
	printf ("reverse of the number=%d", rev);
	return 0;
		
}
