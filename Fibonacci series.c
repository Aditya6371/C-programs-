#include <stdio.h>
//FIBONACCI SERIES UPTO A GIVEN TERMS......
int main()
{
	int n, a=0, b=1, c, i=2;
	printf ("Enter the terms: ");
	scanf ("%d", &n);
	printf ("%d\n%d\n", a, b);
    while (i<n)
	{
		c=a+b;
		printf("%d\n", c);
		a=b;
		b=c;
		i++;
	}
	return 0;
}
    