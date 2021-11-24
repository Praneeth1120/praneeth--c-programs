// display qoutient and remainder without using mod operator
#include<stdio.h>
main()
{
	int a,b,quotient,remainder;
	printf("enter two numbers :");
	scanf("%d%d",&a,&b);
	quotient = a/b;
	printf("Quotient = %d",quotient);
	remainder = a-(b*quotient);
	printf("\nRemainder = %d",remainder);
} 
