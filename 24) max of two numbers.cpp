//Program to find maximum between two numbers
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is max",a);
	}
	else
	{
		printf("%d is max",b);
	}
}
