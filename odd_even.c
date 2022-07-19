#include <stdio.h>
//CHECK A NUMBER IS EVEN OR ODD.....
int main()
{
    int a;
    printf("Enter an integer");
    scanf("%d", &a);
    if(a%2 == 0)
    printf("%d is a even number",a);
    else
    printf("%d is a odd number",a);
}