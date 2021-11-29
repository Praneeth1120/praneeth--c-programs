//program to check whether a year is a leap year or not
#include<stdio.h>
main()
{
	int year;
	printf("Enter a year : ");
	scanf("%d",&year);
	if((year%4==0 && year%100 != 0) || year % 400 == 0)
	{
		printf("It is leap year");
	}
	else
	{ 
	printf("It is not a leap year");
	}
}
