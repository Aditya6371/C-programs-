#include <stdio.h>
//SUM OF NUMBER FROM 1 TO N.....
int main() 
{
    int n, i, sum = 0;
	printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
	{
        sum =sum + i;
    }

    printf("Sum = %d", sum);
    return 0;
}
