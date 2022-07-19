#include<stdio.h>
#include<math.h>
// SIMPLE CALCULATOR OPERATIONS.......
void simplecalculator(float n1,float n2,int x);
float squareroot(float x1);
float power(float a1,float a2);
float percent(float x,float y);
int main()
{
    int a;
    float b;
    printf("SIMPLE CALCULATOR-->1\n\nSQUARE ROOT-->2\n\nTO THE POWER-->3\n\nPERCETAGE OF MARK SECURED-->4\n\nNENTER THE NUMBER ACCORDING TO THE FUNCTIONS MENTIONED: ");
    scanf ("%d",&a);
    if (a==1)
    {
        float n1, n2;
        int x;
        printf ("\n\nEnter first number: ");
        scanf ("%f",&n1);
        printf ("\n\nEnter the second number: ");
        scanf ("%f",&n2);
        printf ("\n\naddition-->1\n\nsubstraction-->2\n\nmultiplication-->3\n\ndivision-->4\n\n\n");
        printf ("Enter the number according to the above arithmatic operator: ");
        scanf ("%d",&x);
        simplecalculator(n1,n2,x);
    }
    if (a==2)
    {
        float x1;
        printf("\nEnter the number:");
        scanf("%f",&x1);
        b=squareroot(x1);
        printf("\n\n%f is the square root of %f",b,x1);
    }
    if (a==3)
    {
        float a1,a2,a3;
        printf("\nEnter the number:");
        scanf("%f",&a1);
        printf("\nEnter the power to be raised: ");
        scanf("%f",&a2);
        b=power(a1,a2);
        printf("\n\n%f is the result of %f%f",b,a1,a2);
    }
    if (a==4)
    {
        float x,y;
        printf("\n\nEnter the number secured: ");
        scanf("%f",&x);
        printf("\n\nEnter the total number: ");
        scanf("%f",&y);
        b=percent(x,y);
        printf("\n\n%f is the percentge secured\n\n",b);
    }
    return 0;
}
void simplecalculator(float n1,float n2,int x)
{
    float  add, sub, mul, div;
    add=n1+n2;
    sub=n1-n2;
    div=n1/n2;
    mul=n1*n2;
    if (x==1)
    {
        printf ("\n\n%f is the sum of %f and %f\n\n",add,n1,n2);
    }
    if (x==2)
    {
        printf ("\n\n%f is the substraction of %f and %f\n\n",sub,n1,n2);
    }
    if (x==4)
    {
        printf ("\n\n%f is the division of %f and %f\n\n",div,n1,n2);
    }
    if (x==3)
    {
        printf ("\n\n%f is the multiplication of %f and %f\n\n",mul,n1,n2);
    }
}
float squareroot(float x1)
{
    float x2;
    x2=sqrt(x1);
    return(x2);
}
float power(float a1,float a2)
{
    float a3;
    a3=pow(a1,a2);
    return(a3);
}
float percent(float x,float y)
{
    float z;
    z=x/y*100;
    return(z);
}