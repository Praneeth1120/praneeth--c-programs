#include<stdio.h>
main()
{
	int p = 2000;
	int t = 1;
	int r = 10;
	printf("%d is the Principal Amount",p);
	printf("\n%d is the Time Period",t);
	printf("\n%d is the Rate of Interest",r);
	int SI = (p*t*r)/100;
	printf("\nThe Simple Interest is %d",SI);
}
