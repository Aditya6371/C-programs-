#include<stdio.h>
//FIND FACTORIAL OF A GIVEN NUMBER......
int main()
{
	int n,p=1;
	printf ("enter a positive integer:");
	scanf ("%d", &n);
	while (n>0)
	{
		p= p * n;
		n--;
	}
	printf ("factroial=%d",p);
	return 0;
}
