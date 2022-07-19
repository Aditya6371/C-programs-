#include<stdio.h>
//CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT.....
int main()
{
	int n, sum=0, m, x;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	m=n;
	while (n!=0)
	{
		x=n%10;
		sum=sum+(x*x*x);
		n=n/10;
	}
	if (m==sum)
	{
		printf ("%d is a armstrong number", m);
	}
	else 
	{
		printf ("%d is not a armstrong number", m);
	}
	return 0;
}
