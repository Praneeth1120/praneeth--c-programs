//Program to check whether a number is positive or not
#include<stdio.h>
main()
{
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else
	{
		printf("%d is negative",a);
	}
}
