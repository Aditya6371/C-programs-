#include<stdio.h>
//SUM OF NUMBERS BETWEEN 1 TO 10.........
int main()
{
    int n=1,sum=0;
    while(n<=10)
    {
    sum=sum+n;
    n++;
    }
    printf("The sum of digits from 1 to 10 is %d",sum);
    return 0;
}