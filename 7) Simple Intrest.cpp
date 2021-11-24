#include<stdio.h>
main()
{
	int p,t,r,SI;
	printf("Enter Principal amount :");
	scanf("%d",&p);
	printf("Enter Time period :");
	scanf("%d",&t);
	printf("Enter Rate of intrest :");
	scanf("%d",&r);
	SI = (p*t*r)/100;
	printf("Simple Intrest : %d",SI);
}
