//program to check whether a number is even or odd
#include<stdio.h>
main()
{
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
}
