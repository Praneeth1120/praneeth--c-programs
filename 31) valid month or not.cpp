//program to input a month number and check whether it is valid
#include<stdio.h>
main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	if(a>0 && a<13)
	{
		printf("It is valid");
	}
	else
	{
		printf("It is not Valid");
	}
}
