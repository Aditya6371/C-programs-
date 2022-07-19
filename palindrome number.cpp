#include<stdio.h>
//CHECK WHETHER A NUMBER IS PALINDROME.......
int main()
{
	int n, rev=0, m;
	printf ("enter a number:");
	scanf("%d", &n);
	m=n;
	while (n!=0)
	{
		rev=(n%10)+(rev*10);
		n=n/10;
	}
	printf ("reverse of the number= %d", rev);
	if (m==rev)
	{
		printf ("\n palindrome number :)");
	}
	else
	{
		printf ("\n not a palindrome number :(");
	}
	return 0;
		
}
