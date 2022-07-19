#include <stdio.h>
//FIND LCM AND HCF OF TWO GIVEN NUMBERS......
int main()
{
    int a, b, p, h, l;
    printf ("Enter first number: ");
    scanf ("%d", &a);
    printf ("Enter second number: ");
    scanf ("%d", &b);
    while (a!=b)
    {
        if  (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    h=a;
    l=(a*b)/h;
    printf ("lcm= %d\nhcf=%d", l, h);
    return 0;
}