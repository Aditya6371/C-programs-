#include <stdio.h>
//TO PRINT MULTIPLICATION TABLE.....
int main()
{
	int a,b=1,c;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("enter upto which u want to continue: ");
	scanf("%d",&c);
	while (b<=c)
	{
	printf ("\n\n%d*%d=%d",a,b,b*a);
	b++;
    }
	return 0;
}
