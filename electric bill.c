#include <stdio.h>
//C PROGRAM OF ELECTRIC BILL.....
int main() {
	int units;
	float amt;
	printf("enter units consumed:");
	scanf("%d", &units);
	if (units <= 50)
	    amt = 3 * units;
	  else if (units <= 200)
	    amt = 150 + 4.80 * (units - 50);
	    else if (units <= 400)
	      amt = 960 + 5.80 * (units - 200);
	      else
	      amt = 2480 + 6.20 * (units - 400);
	 printf("units = %d , amt = %f ",units , amt);
	return 0;
}