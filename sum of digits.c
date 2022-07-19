#include<stdio.h>
//SUM OF INDIVIDUAL DIGITS.....
int main()
{
    int n,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
    }
    printf("sum of the number is=%d",sum);
    return 0;
}